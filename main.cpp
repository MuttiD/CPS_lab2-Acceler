//Uses the measured z-acceleration to drive leds 2 and 3 of the mbed

#include "mbed.h"
#include "MMA7660.h"
#include <cmath>
#include <cstdio>
#define PI 3.141592654

MMA7660 MMA(p28, p27);

DigitalOut connectionLed(LED1);
PwmOut Zaxis_p(LED2);
PwmOut Zaxis_n(LED3);

// define variables for acceleration Ax, Ay and Az
float calculateAngle(float Ax, float Ay, float Az) {
    float angle = 0;
    
    // Defining the Equations to calculate the slope angle
    float sq = sqrt((Ay*Ay)+(Az*Az));
    float angle_rad = atan(Ax / sq);
    angle = (angle_rad * 180) / PI;

    return angle;

}


// Add main funtion
int main() {  
    if (MMA.testConnection())
        connectionLed = 1;
        
    while(true) {
        
        wait(0.2);
        printf("Slope angle value: %f \r\n", calculateAngle(MMA.x(), MMA.y(), MMA.z()));
    }

}

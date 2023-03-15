# Accelerometer and Angle Measurement

## Definition
The mbed Application Board has 3-axis Accelerometer. An Accelerometer measures the acceleration on its own
body. By using simple math, you can calculate the slope angle of the body in any of the axes.
For this lab, we will measure the angle of the slope and print it in the Emulator.

## The project

To complete the function 'calculateAngle' with acceleration of x, y, and z from the Application Board
of the Microcontroller using C++ and print it in the Emulator on the PC.

## Technologies Used

### Microcontroller
* ARM mbed LCP1768 <br />
[mbed](https://os.mbed.com/platforms/mbed-LPC1768/)

### Library
* MMA7660 (3-axis Accelerometer)

### Terminal Emulator 
* Tera Term <br />
[tera term](https://ttssh2.osdn.jp/index.html.en)

### IDE
* Keil Studio <br />
[Keil](https://www.keil.arm.com/)


## Troubleshooting

No issues presented.

## Results
Once the Project was successfuly compiled, the Emulator started to return the slope angle of the Accelerometer every 0.2 seconds
while turning of the Application Board on its axis.
The measures were converted from radian to degrees to facilitate reading.

## Related Links

* [Mbed OS Stats API](https://os.mbed.com/docs/latest/apis/mbed-statistics.html).
* [Mbed OS Configuration](https://os.mbed.com/docs/latest/reference/configuration.html).
* [Mbed OS Serial Communication](https://os.mbed.com/docs/latest/tutorials/serial-communication.html).
* [Mbed boards](https://os.mbed.com/platforms/).

### License and contributions

The software is provided under Apache-2.0 license. Contributions to this project are accepted under the same license. Please see [CONTRIBUTING.md](./CONTRIBUTING.md) for more info.

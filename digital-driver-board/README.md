# digital-driver

A photoreactor driver board designed to be controlled digitally over I2C.

## PCB

This PCB was designed using KiCAD version 5.
Refer to `driver.pdf` for schematic.
PCB images generated with [tracespace](https://github.com/tracespace/tracespace) follow.

<img src="./driver-.top.svg" width="100%"/>
<img src="./driver-.bottom.svg" width="100%"/>

Bill of Materials

| reference      | value         | manufacturer | part number | DigiKey | Newark |
| :------------- | :------------ | :----------- | :---------- | :------ | :----- |
| C2             | 10u           |              |             |         |        |
| C3             | 22u           |              |             |         |        |
| D1             | (red)         |              |             |         |        |
| D2             | (blue)        |              |             |         |        |
| J1, J2         |               |              |             |         |        |
| J3, J4         |               |              |             |         |        |
| J5             | fan connector |              |             |         |        |
| J7             | LED connector |              |             |         |        |
| PS1            |               |              |             |         |        |
| R1, R4, R6, R7 |               |              |             |         |        |
| R2, R5         |               |              |             |         |        |
| U1             |               |              |             |         |        |
| U2             |               |              |             |         |        |

## I2C Interface

DOCUMENTATION TODO

## Firmware

Find in "firmware" folder.

Use Arduino IDE.

We programmed the ATtiny85 using the sparkfun Tiny AVR Programmer: [PGM-11801](https://www.sparkfun.com/products/11801).

## Changelog

### Unprinted

#### Changed
- removed wisconsin crest logo

### Revision B

#### Fixed
- silk screen polarity markings for LED
- backwards I2C connectors

### Revision A

#### Added
- initial design

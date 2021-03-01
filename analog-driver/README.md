# digital-driver

A photoreactor driver board designed to be controlled digitally over I2C.

## PCB

This PCB was designed using KiCAD version 5.
Refer to `driver.pdf` for schematic.
PCB images generated with [tracespace](https://github.com/tracespace/tracespace) follow.

![top](./top.png "PCB top view")

![bottom](./bottom.png "PCB bottom view")

Bill of Materials

| reference      | value         | manufacturer | part number | vendors |
| :------------- | :------------ | :----------- | :---------- | :------ |
| C2             | 10u           |              |             |         |
| D1             | (red)         |              |             |         |
| J3, J4         | Barrel Jack   |              |             |         |
| J5             | fan connector |              |             |         |
| J7             | LED connector |              |             |         |
| R1             | 10k           |              |             |         |
| R2             | 470           |              |             |         |
| R5             | 1k            |              |             |         |
| RV1            | 2.2k          |              |             |         |
| TP1            |               |              |             |         |
| TP2            |               |              |             |         |
| TP3            |               |              |             |         |
| U2             | LED driver    | Mean Well    | LDD-1000L   | [DigiKey](https://www.digikey.com/en/products/detail/mean-well-usa-inc/LDD-1000L/7704722) [Allied](https://www.alliedelec.com/product/mean-well/ldd-1000l/70345765/) |

## Changelog

### 1.0.0

#### Added
- initial design


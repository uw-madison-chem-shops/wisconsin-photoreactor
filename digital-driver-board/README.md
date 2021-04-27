# digital-driver

A photoreactor driver board designed to be controlled digitally over I2C. For fabrication instructions, please see [wpp-fabrication-operation.pdf](./fabrication-and-operation-instructions/wpp-fabrication-operation.tex).

## PCB

This PCB was designed using KiCAD version 5.
Refer to `driver.pdf` for schematic.
PCB images generated with [tracespace](https://github.com/tracespace/tracespace) follow.

<img src="./driver-.top.svg" width="100%"/>
<img src="./driver-.bottom.svg" width="100%"/>

Bill of Materials

| reference      | value         | manufacturer | part number          | price | vendors |
| :------------- | :------------ | :----------- | :------------------- | :---- | :------ |
|                | dip socket    | Mill-Max     | 110-93-308-61-001000 | $1.00 | [DigiKey](https://www.digikey.com/en/products/detail/mill-max-manufacturing-corp/110-93-308-61-001000/7734612) |
| C2             | 10u           | Yageo        | CC1206KKX7R8BB106    | $0.25 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/CC1206KKX7R8BB106/5195365?s=N4IgTCBcDaIMJwIxgAwDYDSGAaB2ASgBwBCxi6IAugL5A) [Mouser](https://www.mouser.com/ProductDetail/Yageo/CC1206KKX7R8BB106/?qs=%2Fha2pyFadujG%252BB25mNGWlTAfaj3wXYmzjlPMfFLRNq4azOfH13S4tw%3D%3D) |
| C3             | 22u           | Yageo        | CC1206MKX7R7BB226    | $0.75 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/cc1206mkx7r7bb226/7071713) |
| D1             | (red)         | Lite-On      | LTST-C230KRKT        | $0.25 | [DigiKey](https://www.digikey.com/en/products/detail/lite-on-inc/LTST-C230KRKT/386857?s=N4IgTCBcDaIDIBUDKCC0BhMBmADAaQCU8EQBdAXyA) [Mouser](https://www.mouser.com/ProductDetail/Lite-On/LTST-C230KRKT/?qs=%2Fha2pyFadujtt9TjjkxDnLsTSvKz5QHldTfy80PY7mPtEP7ka44l7w%3D%3D) |
| D2             | (blue)        | Lite-On      | LTST-C150TBKT        | $0.50 | [DigiKey](https://www.digikey.com/en/products/detail/lite-on-inc/LTST-C150TBKT/388526?s=N4IgTCBcDaIDIBUDKCC0BhAjAVgAwICEBpBEAXQF8g) |
| J1, J2         | i2c connector | JST          | S4B-PH-K-S(LF)(SN)   | $0.50 | [DigiKey](https://www.digikey.com/en/products/detail/jst-sales-america-inc/S4B-PH-K-S-LF-SN/926628) [Newark](https://www.newark.com/jst-japan-solderless-terminals/s4b-ph-k-s-lf-sn/connector-header-2mm-4-position/dp/38K8074) |
| J3, J4         | power input   | CUI          | PJ-002A              | $1.50 | [DigiKey](https://www.digikey.com/en/products/detail/cui-devices/PJ-002A/96962) [Mouser](https://www.mouser.com/ProductDetail/CUI-Devices/PJ-002A/?qs=WyjlAZoYn51CKfAix9Mngw%3D%3D) |
| J5             | fan connector |
| J7             | LED connector |
| PS1            | regulator     | CUI          | VXO7805-500-M-TR     | $3.00 | [DigiKey](https://www.digikey.com/en/products/detail/cui-inc/VXO7805-500-M-TR/11569188) [Newark](https://www.newark.com/cui/vxo7805-500-m-tr/non-isolated-dc-switching-regulator/dp/13AJ1536) |
| R1, R4, R6, R7 | 4.7k          | Yageo        | RC1206DR-074K7L      | $0.10 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/rc1206dr-074k7l/5919134) |
| R2, R5         | 470           | Yageo        | RC1206FR-07470RL     | $0.10 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/RC1206FR-07470RL/728934) |
| R3             | 10k           | Yageo        | RC1206FR-0710KL      | $0.10 | [DigiKey](https://www.digikey.com/en/products/detail/yageo/RC1206FR-0710KL/728483)  |
| U1             | microcontrol. | Microchip    | ATTINY85-20PU        | $1.50 | [DigiKey](https://www.digikey.com/en/products/detail/microchip-technology/attiny85-20pu/735469) [Newark](https://www.newark.com/microchip/attiny85-20pu/microcontroller-mcu-8-bit-attiny/dp/68T3808) |
| U2             | LED driver    | Mean Well    | LDD-1000L            | $6.00 | [DigiKey](https://www.digikey.com/en/products/detail/mean-well-usa-inc/LDD-1000L/7704722) [Allied](https://www.alliedelec.com/product/mean-well/ldd-1000l/70345765/) |

## I2C Interface

`<byte FAN SPEED>` `<byte LED INTENSITY>`

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

# WPP Standardized Base

![WPP base](./base.jpg)

The core structure of the Wisconsin Photoreactor Platform. Each reactor shares this component. It has a 130 mm by 130 mm footprint and is compatible with typical laboratory stir plates.

Through variation of the LED star integrated into a base, the user can control the wavelengths of light delivered by the photon source to a reaction vessel. 
Please see [wpp-fabrication-operation.pdf](./fabrication-and-operation-instructions/wpp-fabrication-operation.tex) for fabrication instructions and LED star installation instructions. See `photon-source-leds` directory for list of LED stars confirmed compatible with the WPP architecture.

### Bill of Materials

| reference         | manufacturer | part number       | price  | vendors |
| :---------------- | :----------- | :---------------- | :----- | :------ |
| standoffs for PCB | RAF          | 4505-440-AL       | $1.00  | [DigiKey](https://www.digikey.com/en/products/detail/raf-electronic-hardware/4505-440-AL/7680509) [Newark](https://www.newark.com/raf-electronic-hardware/4505-440-al/no-plate-hex-male-female-standoffs/dp/95Y3120?st=4505-440-al) |
| LED star heatsink | Ohmite       | SV-LED-113E       | $3.00  | [DigiKey](https://www.digikey.com/en/products/detail/ohmite/SV-LED-113E/2509399) |
| LED star          | Various (see `photon-source-leds` directory) |
| heat-set inserts  | Virtjoule    |                   | $0.00  | [Amazon](https://www.amazon.com/gp/product/B07BH5X252/ref=ppx_yo_dt_b_asin_title_o09_s00?ie=UTF8&psc=1) |
| fan               | Noctua       | NF-A12x15 PWM     | $20.00 | [Amazon](https://www.amazon.com/Noctua-NF-A12x15-PWM-Premium-Quiet/dp/B071W6HJP6) |
| 1/4" screws       | Fastenal     | 0146455           |        |
| 3/4" screws       | Fastenal     | 72490             |        |

All prices are extended estimates in USD.
In general, these are overestimates, so this should be an upper estimate on cost.

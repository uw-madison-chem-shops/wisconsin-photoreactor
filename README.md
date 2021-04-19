# Wisconsin Photoreactor (WPR)

An open source photoreactor. 3D printed enclosure, commercially avaliable components, and a little bit of custom circuitry.

![WPR photo](./coverart.jpg)

## Repository

This is an open source hardware project licensed under the CERN Open Hardware Licence Version 2 - Permissive.
Please see the LICENSE file for the complete license.

This repository is being mirrored to several version control systems in an attempt to ensure maximum avaliability.

| name             | url                                                             |
| ---------------- | --------------------------------------------------------------- |
| Chem             | https://git.chem.wisc.edu/gellman-group/wisconsin-photoreactor  |
| GitHub (primary) | https://github.com/uw-madison-chem-shops/wisconsin-photoreactor |
| GitLab           | https://gitlab.com/uw-madison-chem-shops/wisconsin-photoreactor |

## Safety

The Wisconsin Photoreactor is for use by trained chemistry researchers and should be handled carefully.

The Wisconsin Photoreactor platform utilizes high-intensity LEDs which can cause eye damage if looked at directly.
Light-filtering safety glasses should be worn whenever the photoreactor light source is powered on.
LEDs emitting different colors will require different types of light-filtering safety glasses for protection.
Extra precuation should be taken around ultra-violet and near infra-red light sources emitting "invisible" light.

## Assembly Instructions

This repository contains detailed assembly instructions.
Please see [wpr-assembly.pdf](./assembly-instructions/wpr-assembly.pdf)

## Enclosure

The WPR is designed around a mechanically robust 3D printed enclosure.
Every WPR has the same base, see directory `photoreactor-base`.
The WPR top is meant to be switched based on the reaction vessel used.
See directory `photoreactor-tops` for our ever-growing collection of vessel types.

## Electronics

The WPR incorporates small custom circuit boards controlling the LEDs and fan.
Please see the assembly instructions for more detailed information.
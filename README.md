# Wisconsin Photoreactor Platform (WPP)

An open source photoreactor platform. 3D printed enclosure, commercially available components, and a little bit of custom circuitry.

![WPP photo](./coverart.png)

## Repository

This is an open source hardware project licensed under the CERN Open Hardware License Version 2 - Permissive.
Please see the LICENSE file for the complete license.

This repository is being mirrored to several version control systems in an attempt to ensure maximum availability.

| name             | url                                                             |
| ---------------- | --------------------------------------------------------------- |
| Chem             | https://git.chem.wisc.edu/gellman-group/wisconsin-photoreactor  |
| GitHub (primary) | https://github.com/uw-madison-chem-shops/wisconsin-photoreactor |
| GitLab           | https://gitlab.com/uw-madison-chem-shops/wisconsin-photoreactor |

## Safety

The Wisconsin Photoreactor Platform is for use by trained chemists.

WPP apparatuses utilize high-intensity light emitting diodes (LED) that can cause eye damage if proper safety precautions are not observed. 
A Light-blocking shield should be utilized whenever operating a WPP apparatus.
Care must be taken to ensure the light-blocking shield employed adequately blocks light emitted by a WPP photon source from directly reaching a user.
Use of light-filtering safety glasses alongside a light-blocking shield can provide additional protection.

## Fabrication and Operation Instructions

This repository contains detailed instructions for fabrication, operation and documentation of WPP devices.
Please see [wpp-fabrication-operation.pdf](./fabrication-and-operation-instructions/wpp-fabrication-operation.pdf)

## Enclosure

The WPP is designed around a mechanically robust and simple 3D printed enclosure.
Every WPP device has the same base, see directory `photoreactor-base`.
WPP reaction modules are meant to be switched based on the reaction vessel used.
See directory `photoreactor-reaction-modules` for our growing collection of reaction modules for common vessel types.
For safe WPP device operation, a light blocking shield is recommended. 
See directory `photoreactor-light-shield`, for a 3D-printable light-blocking cover for WPP devices.

## Electronics

The WPP incorporates small custom circuit boards providing control over reaction conditions.
Please see the fabrication instructions for more detailed information.

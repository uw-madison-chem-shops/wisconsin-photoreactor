# Wisconsin Photoreactor Platform (WPP)

An open source photoreactor platform. 3D printed enclosure, commercially available components, and a little bit of custom circuitry.

![WPP photo](./coverart.png)

The WPP has been published in Organic Letters.
Please read our article to learn more about the motivation behind the WPP and to see examples of photochemistry being driven using this reactor.

>[Versatile Open-Source Photoreactor Architecture for Photocatalysis Across the Visible Spectrum](https://doi.org/10.1021/acs.orglett.1c01910); Philip P. Lampkin, Blaise J. Thompson, and Samuel H. Gellman; Org. Lett. 2021, 23, 13, 5277–5281

## Repository

This is an open source hardware project licensed under the CERN Open Hardware License Version 2 - Permissive.
Please see the LICENSE file for the complete license.

This repository is being mirrored to several version control systems in an attempt to ensure maximum availability.

| name             | url                                                                             |
| ---------------- | ------------------------------------------------------------------------------- |
| blaise           | https://git.blaise.zone/uw-madison-chem-shops/wisconsin-photoreactor.git/about/ | 
| Codeburg         | https://codeberg.org/uw-madison-chem-shops/wisconsin-photoreactor               |
| GitHub (primary) | https://github.com/uw-madison-chem-shops/wisconsin-photoreactor                 |
| GitLab           | https://gitlab.com/uw-madison-chem-shops/wisconsin-photoreactor                 |

## Safety

The Wisconsin Photoreactor Platform is for use by trained chemists.

WPP apparatuses utilize high-intensity light emitting diodes (LED) that can cause eye damage if proper safety precautions are not observed. 
A light-blocking shield should be utilized whenever operating a WPP apparatus.
Care must be taken to ensure the light-blocking shield employed adequately blocks light emitted by a WPP photon source from directly reaching a user.
Use of light-filtering safety glasses alongside a light-blocking shield can provide additional protection.

## Fabrication and Operation Instructions

This repository contains detailed instructions for fabrication, operation and documentation of WPP devices.
Please see [wpp-fabrication-operation.pdf](./fabrication-and-operation-instructions/wpp-fabrication-operation.pdf)

A video guide covering part sourcing, 3D-printing, electronics manufacturing, assembly and use of Wisconsin photoreactors is available on [youtube](http://www.youtube.com/watch?v=fkLr17i4FgE)

[![Wisconsin Photoreactor Platform Fabrication Video Guide](./youtubethumbnail.png)](http://www.youtube.com/watch?v=fkLr17i4FgE)

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

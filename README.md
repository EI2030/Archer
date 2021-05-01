Archer
======

Archer is the codename of our 1st EPD laptop prototype with custom-designed motherboard and 3D-printed chassis.

# Specifications

The specification listed are preliminary and subject to change. Note this is only the specification for the prototype, it does **not** represent the spec for the final product.

- SoC: NXP i.MX 7Dual (2x ARM Cortex-A7 @ 1.2GHz)
- RAM: 2x Micron MT41K256M16 (1GB in total, DDR3)
- Flash: None (prototype designed to always boots from TF card)
- HDD: 1x NGFF M.2 B-key (PCIe NVMe)
- Network: RTL8273BS (802.11n + BT)
- Main Screen: E Ink ED103TC2 (10.3" 1872x1404) with capactive touch screen
- Sub Screen: ER-TFT0784-1 (7.84" 1280x400) with capactive touch screen
- Screen Controller: i.MX7 integrated EPDC
- Battery: 2x User replaceable 18650 battery
- EC: LPC55S28
- Ports:
  - USB 2.0 Type A Host x1
  - USB 2.0 Type C DRP with DP Alt Mode and Power Delivery x1
  - USB 2.0 Micro B Serial Debug Console x1
  - TF card slot

# Goals

## Goals of this prototype

- Proof of Concept of a EPD laptop
- Enable early development of EC firmware
- Enable early development of the user software
- Test chassis design ideas
- Verify peripheral circuit design
- Enable future prototype with final processor choice

## Non-Goals

- Archer will not represent the performance level of the final product
- Archer is not optimized for low power consumption

# Progress

## Chassis

R0.1 chassis design in progress. Not yet printed.

![case-design](https://github.com/ei2030/Archer/raw/main/assets/r0p1_case_design.jpg)

## Motherboard

R0.1 schematics design in progress. Not yet assembled.

# Legalese

E Ink® is a registered trademark by E Ink Corporation. All other trademarks are property of their respective owner.

# License

The hardware design is released under the CERN Open Source Hardware License strongly-reciprocal variant, CERN-OHL-S. A copy of the license is provided in the source repository. Additionally, user guide of the license is provided on ohwr.org.

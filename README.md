# PCB Business Card

An embedded hardware project combining **custom PCB design, STM32 firmware, and a functional business card** into a single compact board.

This project was designed and developed as a way to demonstrate practical skills in **embedded systems, PCB design, firmware development, hardware debugging, and electronics engineering**.

## Overview

The PCB Business Card is a custom-designed board built around an **STM32C031G6U6** microcontroller. Rather than creating a traditional paper business card, the goal was to build a functional piece of hardware that can also serve as a demonstration of embedded engineering skills.

The project includes both the **custom PCB hardware** and the **firmware required to operate the board**.

## Project Goals

* Design a custom PCB from concept through manufacturing
* Develop firmware for an STM32 microcontroller
* Interface the microcontroller with external hardware
* Create a compact and visually interesting PCB layout
* Practice professional embedded-software organization
* Debug and validate both hardware and firmware
* Produce a functional physical device rather than only a schematic or simulation

## Hardware

### Microcontroller

**STM32C031G6U6**

The STM32C0 series microcontroller serves as the primary processor for the board.

### PCB

The board was custom-designed specifically for this project, including:

* Custom board layout
* Component placement
* Routing
* Power distribution
* GPIO connections
* Programming/debug interface
* Board-level hardware integration

## Firmware

The firmware is developed for the STM32 microcontroller and organized into several components:

```text
Core/
├── Inc/
└── Src/

Drivers/
Debug/
```

The project was configured using **STM32CubeMX / STM32CubeIDE** and includes the generated STM32 project configuration and linker configuration.

### Firmware Architecture

The project separates application-level code from hardware abstraction and peripheral drivers to make the firmware easier to understand and maintain.

The repository includes:

* STM32 startup and system configuration
* GPIO configuration
* Peripheral initialization
* Application firmware
* Hardware drivers
* Debug configuration
* STM32CubeMX project configuration

## Engineering Skills Demonstrated

This project demonstrates experience with:

**Embedded Systems**

* STM32 microcontrollers
* Bare-metal embedded programming
* GPIO and peripheral configuration
* Microcontroller startup/configuration

**Firmware Development**

* C programming
* Embedded software architecture
* Hardware abstraction
* Debugging firmware on physical hardware

**PCB Design**

* Schematic design
* PCB layout
* Component selection
* Routing and board organization
* Design for physical manufacturing

**Development Tools**

* STM32CubeMX
* STM32CubeIDE
* Git/GitHub
* Embedded debugging tools

## Development Process

The project was developed through an iterative hardware/firmware workflow:

1. Define the functionality and hardware requirements
2. Select the microcontroller and supporting components
3. Design the schematic
4. Create the PCB layout
5. Review routing and hardware connections
6. Manufacture the PCB
7. Develop the STM32 firmware
8. Program the microcontroller
9. Test the hardware
10. Debug and refine the design

This process provided experience working across the boundary between **hardware and software**, rather than treating them as separate projects.

## Repository Structure

```text
BusinessCardPCB/
│
├── Core/
│   ├── Inc/
│   └── Src/
│
├── Drivers/
│
├── Debug/
│
├── .settings/
│
├── BusinessCard.ioc
├── BusinessCard Debug.launch
├── STM32C031G6UX_FLASH.ld
├── .cproject
├── .project
└── .mxproject
```

## What I Learned

This project helped develop a stronger understanding of the complete embedded development workflow, from **hardware design and PCB layout to firmware development and debugging**.

One of the most valuable aspects of the project was working with a real physical board. Hardware development introduces constraints that aren't present in purely software projects, including component availability, PCB space, electrical connections, programming/debugging, and the interaction between firmware and physical hardware.

## Future Improvements

Potential future revisions could include:

* Additional interactive features
* Improved power management
* Additional sensors or peripherals
* Wireless communication
* Improved enclosure/mechanical design
* Additional firmware functionality
* Automated hardware/firmware testing

## Why This Project Matters

This project was intentionally designed to demonstrate more than just the ability to write code.

It demonstrates the ability to take an idea from **concept → hardware design → PCB → firmware → physical testing** and work across multiple areas of engineering to produce a functioning device.

---

**Technologies:** C · STM32 · STM32CubeMX · STM32CubeIDE · Embedded Systems · PCB Design · Git · GitHub

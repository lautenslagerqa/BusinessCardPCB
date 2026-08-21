# PCB Business Card

A custom-designed **STM32-based PCB business card** featuring a multiplexed LED display. The project combines PCB design, embedded C firmware, and hardware debugging into a compact functional device.

<img width="437" height="282" alt="image" src="https://github.com/user-attachments/assets/5890906f-0dc5-451a-b7d5-e85d290445c9" />

## Features

* **STM32C031G6U6** microcontroller
* **Multiplexed LED display**
* GPIO-controlled LED matrix
* Firmware-driven display refreshing
* Custom PCB schematic and layout
* Programming and debugging interface
* Custom STM32 firmware

## Firmware

The firmware was developed using **STM32CubeMX / STM32CubeIDE** and written in C.

The STM32 controls the LED display by rapidly switching between rows and columns, allowing multiple LEDs to be controlled with a limited number of GPIO pins.

```text
Core/
├── Inc/
└── Src/

Drivers/
Debug/
```

## Skills Demonstrated

**Embedded Systems**

* STM32
* C programming
* GPIO control
* Multiplexed LED displays
* Embedded debugging

**PCB Design**

* Schematic design
* PCB layout
* Component selection
* LED and GPIO routing
* Hardware integration

## Development Process

**Concept → Schematic → PCB Layout → Manufacturing → Firmware → Testing**

This project demonstrates the ability to develop a complete embedded system spanning **hardware design, PCB manufacturing, firmware development, and physical debugging**.

---

**Technologies:** C · STM32C031G6U6 · STM32CubeMX · STM32CubeIDE · Multiplexed LED Display · PCB Design · Git · GitHub

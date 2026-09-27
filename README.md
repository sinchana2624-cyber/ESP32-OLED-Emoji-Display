# ESP32-OLED-Emoji-Display
# ESP32 OLED Emoji Display

## Overview

This is an individual mini project using an ESP32, a 128×64 OLED
display, and a push button to create an interactive emoji display.

The project was developed and tested using Wokwi and was also
implemented and tested on a physical breadboard prototype.

## Objective

To design and implement a simple interactive OLED display in which
a push button is used to switch between different emoji expressions.

## Components Used

- ESP32
- 128×64 OLED Display (SSD1306)
- Push Button
- Breadboard
- Jumper Wires

## Software and Libraries

- Wokwi
- Arduino/C++
- Adafruit GFX Library
- Adafruit SSD1306 Library

## Circuit Connections

### OLED Display

| OLED Pin | ESP32 |
|----------|-------|
| SDA | GPIO 21 |
| SCL | GPIO 22 |
| VCC | 3.3V |
| GND | GND |

### Push Button

| Button | ESP32 |
|----------|-------|
| Button input | GPIO 15 |
| Other terminal | GND |

The button uses the ESP32 internal pull-up resistor through
`INPUT_PULLUP`.

## Working

The ESP32 communicates with the OLED display using the I²C
communication protocol.

When the push button is pressed, the program changes the displayed
emoji.

The project contains six emoji states:

1. Happy
2. Sad
3. Surprised
4. Wink
5. Angry
6. Laugh

The state is incremented with each button press and cycles through
the six emoji expressions.

## OLED Configuration

- Resolution: 128 × 64 pixels
- Controller: SSD1306
- I²C Address: `0x3C`
- SDA: GPIO 21
- SCL: GPIO 22

## Project Files

- `sketch.ino` – Main ESP32 program
- `diagram.json` – Wokwi circuit configuration
- `libraries.txt` – Libraries used in the Wokwi project

## Wokwi Simulation

The project was developed and tested using Wokwi before and during
the implementation process.

Wokwi Simulation:

PASTE YOUR WOKWI LINK HERE

## Physical Prototype

The project was implemented on a physical breadboard using an ESP32,
OLED display, push button, and jumper wires.

The physical prototype was tested successfully, and the OLED display
changes between six emoji expressions when the button is pressed.

## Project Photos

### Physical Prototype

![Physical Prototype](ESP32_img1.jpeg)

### OLED Display

![OLED Display](ESP32_img2.jpeg)

### Circuit

![Circuit](ESP32_img3.jpeg)

### Working Output

![Working Output](ESP32_img4.jpeg)

## Working Demonstration

A video demonstration of the working physical prototype is included
in this repository.

## Results

The ESP32 successfully controls the OLED display, and pressing the
push button cycles through six different emoji expressions.

## Future Improvements

- Add more emoji expressions
- Add emoji animations
- Add multiple buttons
- Improve button debouncing
- Add more interactive features

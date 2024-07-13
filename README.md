# Streetlight Automation using IoT

## Introduction
Traditional street lighting systems often waste significant energy by remaining illuminated during daylight or when no one is present in the vicinity. This project leverages the power of IoT and Arduino Uno to create an intelligent street lighting system that autonomously adapts to changing environmental conditions.

## Components
- Arduino Uno
- Light Sensors (LDR)
- Motion Detectors (IR)
- GSM Module
- LCD Display
- LEDs
- Breadboard
- Wires

## Circuit Diagram
![image](https://github.com/user-attachments/assets/a2108f6c-0f09-45c3-81f1-a2d4230bd6ca)

## Procedure
### Prepare your hardware:
- You'll need an Arduino UNO board.

### Connect your Arduino UNO:
- Write Arduino code using Arduino IDE.
- Use libraries like SoftwareSerial and LiquidCrystal.

### Write the Arduino Code:
- Implement the code provided below and upload it to your board.

### Run your project:
- Upload the Arduino code to your board.
- Ensure it's connected to the internet.

## Methodology
The Arduino microcontroller, now equipped with internet technologies, will automatically switch the street light on when ambient light falls below a certain level, as detected by the LDR and IR sensors. The street light will switch off when daylight is detected.

## Hardware Components
### Arduino Uno
- A widely used microcontroller development board known for its simplicity and versatility.

### IR Sensor
- Detects the presence of an object or obstacle by measuring the reflection or emission of infrared light.

### LDR Sensor
- A Light Dependent Resistor changes its electrical resistance in response to changes in the ambient light level.

### LCD Display
- Used to provide visual feedback and display information.

### Breadboard
- Provides a platform for building and testing electronic circuits without soldering.

## Libraries Used
### LiquidCrystal.h
- Simplifies the process of displaying information on alphanumeric and graphical LCD screens.

### SoftwareSerial.h
- Allows the creation of software-based serial communication ports on digital pins of your Arduino board.

## Working Images
![Screenshot 2024-05-11 094255](https://github.com/user-attachments/assets/8137b9fc-3962-407f-bb25-8fb5a3882e02)

## Conclusion
This IoT-based street lighting system significantly reduces energy consumption, lowers operational costs, and reduces the carbon footprint. It enhances public safety by ensuring well-lit streets when needed and minimizes light pollution, thereby preserving the natural environment. This project can serve as a foundation for smart city initiatives, demonstrating the potential of IoT and automation in urban infrastructure.
``` &#8203;:citation[oaicite:0]{index=0}&#8203;

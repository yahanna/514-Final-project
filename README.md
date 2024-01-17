# Control Your Dynamics in an Interactive Way!
## Wireless Interactive Pressure-Sensitive Piano System

### Introduction
This innovative system integrates pressure sensors and capacitive keys to simulate the tactile experience of a real piano, enabling fun and game-like piano practice. It allows users to practice anytime, anywhere, using signal processing to emulate the different strengths of piano keys. The display module visually represents the pressure applied during play, enhancing the learning and practicing experience.

### Sensor Device

#### Sensor Selection
- **Force Sensitive Resistors (FSRs)**: Tekscan FlexiForce A201, Interlink Electronics FSR 402
- **Piezoelectric Sensors**: LDT0-028K, TE Connectivity Piezo Film Lab Amplifier
- **Capacitive Pressure Sensors**: NXP MPX2010 Series, SDP810 Series

#### Microcontroller
- **Part Number**: ESP32-D0WD
- **Role**: Acts as the central processing unit for the sensor system, managing data collection, processing, and wireless communication.

### Display Device

#### Key Components and Steps
- **Hydraulic Pump System**: Connects each sensor to a miniature hydraulic pump to push liquid into the display based on pressure data.
- **Liquid Display**: Transparent containers or tubes filled with liquid, each corresponding to a pressure pad.
- **Control Unit**: Translates sensor data into control signals for the hydraulic pumps, adjusting the liquid flow based on pressure levels.

#### Implementation Method
- Pressure sensors detect force, sending data to the control unit.
- Control unit interprets this data and controls hydraulic pumps to adjust liquid levels in the display.
- Users observe the liquid's rise to gauge the pressure applied to each key.

### Communication and Functionality

#### Diagrams
- **Communication Flow Chart**: Illustrates the data flow from sensors to the control unit and then to the display.
- **System Integration Diagram**: Shows connections between the sensor device, control unit, and display module.
![Sensor Device]([https://example.com/sensor_device_image.jpg](https://drive.google.com/file/d/1_74_HpEkwKqBHj1hXioSZJh9ZVu__G57/view?usp=drive_link)https://drive.google.com/file/d/1_74_HpEkwKqBHj1hXioSZJh9ZVu__G57/view?usp=drive_link)

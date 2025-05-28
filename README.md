# Obstacle-Detection-System-using-Ultrasonic-Sensor
# 🚀 Ultrasonic Distance-Based Alert System  

This project utilizes an **HC-SR04 ultrasonic sensor** with an ESP8266 (NodeMCU) to measure distances and trigger visual (LED) and audio (buzzer) alerts. The system is ideal for proximity detection in robotics, smart parking systems, and similar applications.

---
##  Hardware Components
- **Microcontroller**: ESP8266 (NodeMCU)
- **Ultrasonic Sensor**: HC-SR04
- **LED**: Standard 5mm LED
- **Buzzer**: Active buzzer
- **Wires, breadboard**, and resistors as needed.

---
##  Overview
- Measures distance using ultrasonic pulses.
- Provides multi-level alerts based on distance:
  - **≤10 cm**: Solid LED + continuous buzzer.
  - **11–25 cm**: Fast blinking + fast beep.
  - **26–50 cm**: Moderate blinking + moderate beep.
  - **51–100 cm**: Slow blinking + slow beep.
  - **101–150 cm**: Very slow blinking + beep.
  - **>150 cm**: LED off, no beep.
- Real-time distance data via Serial Monitor.

---



##  Pin Configuration
| Component   | ESP8266 Pin |
|-------------|--------------|
| HC-SR04 Trig | D6          |
| HC-SR04 Echo | D5          |
| LED          | D2          |
| Buzzer       | D8          |

---

##  Working Principle
1. Sends ultrasonic pulses and measures echo time.
2. Calculates distance from the pulse duration.
3. Triggers LED and buzzer with patterns based on distance thresholds.

---

##  Usage Instructions
1. **Wiring**:  
   - Connect HC-SR04 `Trig` → D6, `Echo` → D5.
   - Connect LED anode → D2 (with resistor), cathode → GND.
   - Connect buzzer → D8 and GND.

2. **Upload Code**:  
   - Open the code in Arduino IDE or PlatformIO.
   - Select the correct board (e.g., NodeMCU 1.0).
   - Upload the code.

3. **Monitor Output**:  
   - Open Serial Monitor at `9600` baud to view real-time distance.

---

##  **Serial Monitor Example**:
    -Distance: 5 cm
    -Distance: 15 cm
    -Distance: 35 cm
    -Distance: 85 cm



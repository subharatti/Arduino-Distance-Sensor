# 📏 Arduino Distance Sensor

An Arduino-based real-time distance alert system that uses an ultrasonic sensor, vibration motor, and LEDs to detect nearby objects and trigger alerts. Built with C++ and designed for simple detection applications such as obstacle avoidance.

## 🚀 Features

-📡 Ultrasonic Distance Measurement  
  - Uses an HC-SR04 ultrasonic sensor to measure distance
  - Calculates object distance with precise timing

- ⚠️ Real-Time Alerts  
  - Triggers visual and physical alerts when an object is detected within 60 cm  
  - Activates a vibration motor and LED indicators to notify users instantly

-🔌 Pin Control and I/O Management  
  - Configures digital pins to interface with input and output components  
  - Utilizes `pinMode`, `digitalWrite`, and `pulseIn` for precise hardware control

- 🧠 Conditional Logic  
  - Implements simple threshold-based logic in C++  
  - Activates alert components only when the measured distance falls below the set range


## 🛠 Technologies & Components Used

- Arduino Uno
- C++
- HC-SR04 Ultrasonic Sensor
- Vibration Motor
- LEDs
- Breadboard & Jumper Wires


## ⚙️ How It Works

1. Sends a trigger pulse from the Arduino to the ultrasonic sensor  
2. Measures the time for the echo pulse to return  
3. Calculates the distance based on the speed of sound  
4. If distance < 60 cm:  
   - Activates the vibration motor  
   - Lights up the red LED  
   - Deactivates alert if object moves out of range (green LED turns back on)

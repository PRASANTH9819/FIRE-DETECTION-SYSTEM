# 🔥 Fire Detection System with ESP8266 and Blynk

## 📝 Overview
This project is a **fire detection system** using an **ESP8266 (NodeMCU)**, a **flame sensor**, a **buzzer**, and an **LED**. When the flame sensor detects fire, the system:
- 🚨 Activates the **buzzer** and **LED** as an alert.
- 📲 Sends real-time notifications via **Blynk**.
- 📊 Updates a **Blynk virtual gauge** to indicate fire status.

## 🛠 Components Used
- 🖥 **ESP8266 NodeMCU**
- 🔥 **Flame Sensor**
- 🔊 **Buzzer**
- 💡 **LED**
- 🔌 **Resistors and Jumper Wires**

## ⚡ Circuit Diagram
Connect the components as follows:
- 🔥 **Flame Sensor** → D1 (Input)
- 🔊 **Buzzer** → D2 (Output)
- 💡 **LED** → D3 (Output)

## 📦 Software Requirements
- 💻 **Arduino IDE**
- ⚙️ **ESP8266 Board Package**
- 🏗 **Blynk Library**

## 🚀 Installation & Setup
1. **Install Arduino IDE** (if not already installed).
2. **Install ESP8266 Board Package**
   - Go to **File** → **Preferences** → Add the following URL in "Additional Board Manager URLs":  
     `http://arduino.esp8266.com/stable/package_esp8266com_index.json`
   - Open **Board Manager** and search for **ESP8266**. Install it.
3. **Install Required Libraries**
   - Go to **Sketch** → **Include Library** → **Manage Libraries**.
   - Search for and install **Blynk**.
4. **Setup Blynk**
   - 📱 Download **Blynk app** on your smartphone.
   - 🛠 Create a new project and note the **Auth Token**.
   - 📊 Add a **Gauge** widget (V1) and set the range from **0 to 100**.
   - 🚨 Enable **Event Notification** for fire detection alerts.
5. **Upload the Code**
   - 🔐 Modify the `ssid` and `pass` with your Wi-Fi credentials.
   - 🔑 Enter your **Blynk Auth Token**.
   - ⬆️ Upload the code to **ESP8266** using Arduino IDE.

## 🖥 Code Explanation
- The system **reads the flame sensor value** and checks for fire.
- 🔥 If **fire is detected**, the **buzzer and LED** turn **ON**, and a **Blynk event notification** is triggered.
- ❌ If **no fire is detected**, the buzzer and LED turn **OFF**.
- 📊 The **Blynk gauge** updates dynamically to indicate the fire status.

## 🔄 How It Works
1. 🔌 Power ON the ESP8266.
2. 🔍 The system starts monitoring the flame sensor.
3. 🔥 If fire is detected:
   - 🚨 Buzzer and LED turn ON.
   - 📲 Blynk sends an **event notification**.
   - 📊 The virtual gauge on the app updates.
4. 🛑 If fire is not detected, the system remains in standby mode.

## 🔮 Future Enhancements
- 🏠 Add **MQ-2 Gas Sensor** for smoke detection.
- ☁️ Implement **Cloud Logging** for historical fire events.
- 🤖 Integrate **Telegram Bot** for instant fire alerts.

## 📂 Repository
Find the source code on **GitHub**: [Your Repository Link Here]

---
This project is a simple yet effective **fire detection system** for safety monitoring using **ESP8266** and **Blynk**. 🔥📲


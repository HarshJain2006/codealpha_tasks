Temperature & Humidity Monitoring System using Arduino

📌 Project Overview

This project is a Temperature & Humidity Monitoring System developed using Arduino UNO, DHT11 Sensor, and a 16x2 I2C LCD Display.

The system continuously monitors environmental conditions and displays real-time temperature and humidity readings on the LCD screen. An LED alert system is also implemented to indicate when the temperature exceeds a predefined threshold.

This project was completed as Task 2 during my Internet of Things (IoT) Internship at CodeAlpha.

🚀 Features

* Real-time temperature monitoring
* Real-time humidity monitoring
* LCD display using I2C communication
* Serial Monitor output
* Temperature threshold alert using LED
* Simulation and physical hardware implementation

 🛠️ Components Used

* Arduino UNO
* DHT11 Temperature & Humidity Sensor
* 16x2 I2C LCD Display
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires

🔌 Circuit Connections

DHT11 Sensor

| DHT11 Pin | Arduino UNO |
| --------- | ----------- |
| VCC       | 5V          |
| DATA      | D2          |
| GND       | GND         |

I2C LCD

| LCD Pin | Arduino UNO |
| ------- | ----------- |
| VCC     | 5V          |
| GND     | GND         |
| SDA     | A4          |
| SCL     | A5          |

LED Alert

| LED Pin     | Arduino UNO               |
| ----------- | ------------------------- |
| Anode (+)   | D8                        |
| Cathode (-) | GND through 220Ω resistor |


⚙️ Working Principle

1. The DHT11 sensor measures temperature and humidity.
2. Arduino reads the sensor values.
3. Temperature and humidity readings are displayed on the I2C LCD.
4. The same readings are displayed on the Serial Monitor.
5. If the temperature exceeds the predefined threshold (30°C):
   * The LED turns ON.
6. If the temperature is below the threshold:
   * The LED remains OFF.


📸 Project Images

Circuit Diagram

<img width="1117" height="682" alt="Circuit diagram" src="https://github.com/user-attachments/assets/d7a4d79a-9056-49ac-bd04-907c53f06781" />


 Hardware Setup
 
<img width="3060" height="4080" alt="Hardware setup" src="https://github.com/user-attachments/assets/fee7dde3-c170-4114-b4e6-f5fae411f8f8" />

 LCD Output

<img width="1739" height="904" alt="output image 1" src="https://github.com/user-attachments/assets/293f2512-b215-4af6-a718-05ee0049c179" />


<img width="1708" height="920" alt="output image 2" src="https://github.com/user-attachments/assets/e6f41033-3b76-4f42-a20f-a0167a75546f" />


 📚 Libraries Used

* DHT Sensor Library by Adafruit
* Adafruit Unified Sensor
* LiquidCrystal_I2C
* Wire Library


🎯 Learning Outcomes

* Sensor Interfacing
* I2C Communication
* LCD Display Programming
* Environmental Monitoring
* Embedded Systems Development
* Arduino Programming
* Hardware Debugging


🏢 Internship Information

Organization: CodeAlpha

Domain: Internet of Things (IoT)

Task: Task 2 – Temperature & Humidity Monitoring System


👨‍💻 Author

**Harsh Jain**

GitHub: https://github.com/HarshJain2006

LinkedIn: www.linkedin.com/in/hj06


📄 License

This project is created for educational and learning purposes.

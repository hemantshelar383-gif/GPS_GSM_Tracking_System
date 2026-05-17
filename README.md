# 🌍 GPS & GSM Based Vehicle Tracking System

<p align="left">
  <img src="https://img.shields.io/badge/Arduino-UNO-00979D?style=for-the-badge&logo=arduino&logoColor=white"/>
  <img src="https://img.shields.io/badge/GPS-NEO--6M-blue?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/GSM-SIM800L-green?style=for-the-badge"/>
  <img src="https://img.shields.io/badge/Language-C%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white"/>
  <img src="https://img.shields.io/badge/License-MIT-yellow?style=for-the-badge"/>
</p>

A real-time vehicle tracking system built with Arduino UNO, NEO-6M GPS module, and SIM800L GSM module. When triggered, the system reads live GPS coordinates and sends a **clickable Google Maps link via SMS** — no internet connection on the Arduino side required.

> 🎬 More projects on my [YouTube channel → Electronics Engineer](https://youtube.com/@electronicsengineer-k5j)

---

## 📸 Demo

| Circuit Setup | SMS Output |
|---|---|
| *(Add your circuit photo here)* | *(Add your SMS screenshot here)* |

---

## ⚙️ How It Works

```
GPS Satellites
     │
     ▼
 NEO-6M GPS Module  ──►  Arduino UNO  ──►  SIM800L GSM Module  ──►  Mobile Phone (SMS)
                         (TinyGPS++)         (AT Commands)             (Google Maps Link)
```

1. The NEO-6M GPS module continuously receives satellite signals
2. Arduino decodes the raw NMEA data using the **TinyGPS++** library
3. Valid latitude & longitude coordinates are extracted
4. Arduino formats them into a Google Maps URL
5. SIM800L sends the URL to a registered phone number via SMS

---

## 🧰 Hardware Required

| Component | Quantity |
|---|---|
| Arduino UNO | 1 |
| NEO-6M GPS Module | 1 |
| SIM800L / SIM900 GSM Module | 1 |
| SIM Card (SMS enabled) | 1 |
| External 5V Power Supply (for GSM) | 1 |
| Breadboard + Jumper Wires | As needed |

---

## 💻 Software & Libraries

- [Arduino IDE](https://www.arduino.cc/en/software)
- [TinyGPS++ Library](https://github.com/mikalhart/TinyGPSPlus)
- `SoftwareSerial` (built-in with Arduino IDE)

---

## 🚀 Getting Started

### 1. Clone the Repository
```bash
git clone https://github.com/hemantshelar383-gif/GPS_GSM_Tracking_System.git
cd GPS_GSM_Tracking_System
```

### 2. Install Libraries
In Arduino IDE → **Sketch → Include Library → Manage Libraries** → Search and install:
- `TinyGPS++`

### 3. Wire the Circuit
Refer to the circuit diagram in the `/circuit diagrams` folder.

### 4. Configure the Code
Open the `.ino` file and update the mobile number:
```cpp
String mobileNumber = "+91XXXXXXXXXX"; // Replace with your number
```

### 5. Upload & Run
- Select **Board:** Arduino UNO
- Select the correct **COM Port**
- Click **Upload**
- Open Serial Monitor at **9600 baud** to view GPS status

---

## 📂 Repository Structure

```
GPS_GSM_Tracking_System/
│
├── Gps code.ino/
│   └── sketch_jan01a/
│       └── sketch_jan01a.ino   # Main Arduino sketch
│
├── circuit diagrams/           # Wiring and block diagrams
│
├── README.md
└── LICENSE
```

---

## 📡 Sample SMS Output

```
Your Location:
Lat: 21.1458
Lon: 79.0882
https://maps.google.com/?q=21.1458,79.0882
```

---

## 🔮 Future Enhancements

- [ ] ESP32 integration for live IoT cloud tracking
- [ ] Web dashboard for real-time monitoring
- [ ] Speed & distance calculation
- [ ] Geofencing with alert SMS
- [ ] Mobile app integration

---

## ⚠️ Known Limitations

- Initial GPS lock time can take 30–60 seconds outdoors
- GSM module requires a separate power supply (high current draw)
- SMS delivery depends on GSM network availability

---

## 👤 Author

**Hemant Shelar**
Electronics & Telecommunication Engineering | Embedded Systems | IoT | Arduino

[![YouTube](https://img.shields.io/badge/YouTube-Electronics%20Engineer-red?style=flat&logo=youtube)](https://youtube.com/@electronicsengineer-k5j)
[![LinkedIn](https://img.shields.io/badge/LinkedIn-Connect-blue?style=flat&logo=linkedin)](https://www.linkedin.com/in/hemant-shelar-l07)
[![GitHub](https://img.shields.io/badge/GitHub-Follow-black?style=flat&logo=github)](https://github.com/hemantshelar383-gif)

---

## 📄 License

This project is licensed under the [MIT License](LICENSE).

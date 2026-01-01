# GPS_GSM_Tracking_System
Real-time GPS tracking system using Arduino, NEO-6M GPS and GSM module with Google Maps link via SMS.
📍 GPS GSM Tracking System using Arduino
🔹 Project Overview

This project implements a real-time GPS tracking system using Arduino UNO, NEO-6M GPS module, and SIM800/SIM900 GSM module.
The system fetches live latitude and longitude coordinates and sends them to a registered mobile number via SMS containing a Google Maps link, enabling easy location tracking.

🔹 Features

Real-time GPS location tracking

SMS-based location sharing

Google Maps clickable link generation

Works without internet on Arduino side

Reliable and low-cost embedded solution

🔹 Hardware Components

Arduino UNO

NEO-6M GPS Module

SIM800 / SIM900 GSM Module

SIM Card (SMS enabled)

External power supply for GSM

Breadboard and jumper wires

🔹 Software Requirements

Arduino IDE

TinyGPS++ library

SoftwareSerial library

🔹 Circuit Description

GPS module communicates with Arduino using SoftwareSerial pins

GSM module sends SMS using AT commands

External power supply is used for GSM to handle high current requirements

📁 Circuit diagram is available in the circuit connection/ folder.

🔹 Working Principle

The GPS module receives satellite signals and provides latitude and longitude data.

Arduino reads and validates GPS data using the TinyGPS++ library.

Arduino formats the coordinates into a Google Maps URL.

GSM module sends an SMS containing the Google Maps link to the registered mobile number.

The receiver opens the link to view the live location on Google Maps.

🔹 Arduino Code

The complete Arduino source code is available in:

code/gps_gsm_maps.ino


The code includes:

GPS data decoding

GSM AT command handling

Google Maps link generation

Modular and error-safe structure

🔹 Output

SMS received on mobile phone

Message contains latitude, longitude, and Google Maps link

📁 Output screenshots are available in the output/ folder.

🔹 Applications

Vehicle tracking systems

Anti-theft solutions

Fleet management

Emergency location tracking

Asset monitoring

🔹 Advantages

Simple and cost-effective design

No internet dependency on hardware

Works in remote areas with GSM coverage

Easy to extend and upgrade

🔹 Limitations

SMS delay depends on GSM network

Initial GPS fix may take time

GSM module requires external power

🔹 Future Enhancements

ESP32 + IoT cloud dashboard

Live web-based tracking

Speed and distance calculation

Mobile application integration

🔹 Repository Structure
GPS_GSM_Tracking_System
│
├── code/
│   └── gps_gsm_maps.ino
│
├── circuit connection/
│   └── wiring.png
│
├── output/
│   └── sms_output.jpg
│
├── README.md
└── LICENSE

🔹 Author

Hemant Shelar
Electronics & Telecommunication Engineering (ENTC)
Arduino | Embedded Systems | IoT

🔹 License

This project is licensed under the MIT License.

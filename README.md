🌍 GPS & GSM Based Vehicle Tracking System using Arduino
1. Introduction

In recent years, location tracking systems have become an essential part of modern transportation, logistics, and security solutions. GPS and GSM technologies are widely used to track vehicles, assets, and people in real time.
This project presents a GPS and GSM based tracking system using Arduino UNO, which provides the live geographical location of an object by sending latitude and longitude as a Google Maps link via SMS.

The system is designed to be low-cost, reliable, and easy to implement, making it suitable for academic and real-world embedded applications.

2. Objectives of the Project

To design a real-time GPS tracking system using Arduino

To interface GPS and GSM modules with Arduino UNO

To send location details through SMS

To generate a clickable Google Maps link

To understand serial communication and AT commands

3. System Overview

The system consists of an Arduino UNO connected to a GPS module and a GSM module.

The GPS module receives satellite signals and provides location data.

The Arduino UNO processes and validates the GPS data.

The GSM module sends the processed location to a predefined mobile number in the form of an SMS.

The system does not require an internet connection on the Arduino side and works solely on GSM network availability.

4. Hardware Components Used

Arduino UNO

NEO-6M GPS Module

SIM800 / SIM900 GSM Module

SIM Card with SMS service enabled

External power supply for GSM module

Breadboard

Jumper wires

5. Software Requirements

Arduino IDE

TinyGPS++ Library

SoftwareSerial Library

6. Block Diagram Description

The block diagram consists of:

GPS Module → Sends latitude & longitude to Arduino

Arduino UNO → Processes GPS data and controls GSM module

GSM Module → Sends SMS with Google Maps link

Mobile Phone → Receives SMS and displays location

The block diagram and circuit diagram are provided in the repository folders.

7. Circuit Description

The GPS module communicates with Arduino using SoftwareSerial pins.

The GSM module communicates using AT commands.

GSM module is powered using an external power supply due to high current requirements.

Proper grounding is ensured between Arduino, GPS, and GSM modules.

Circuit diagram images are available in the circuit connection/ folder.

8. Working Principle

The GPS module continuously receives data from GPS satellites.

The Arduino reads raw GPS data and decodes it using the TinyGPS++ library.

Valid latitude and longitude values are extracted.

Arduino formats the coordinates into a Google Maps URL.

The GSM module sends an SMS containing the Google Maps link to the registered mobile number.

The user clicks the link to view the real-time location on Google Maps.

9. Algorithm

Initialize serial communication for GPS and GSM

Read GPS data continuously

Check for valid GPS location

Extract latitude and longitude

Generate Google Maps URL

Send SMS using GSM AT commands

Repeat process after fixed delay

10. Arduino Code

The complete Arduino source code is available in:

code/gps_gsm_maps.ino


The code is written in Embedded C and follows a modular structure for better readability and scalability.

11. Output

SMS received on the mobile phone

Message contains:

Latitude

Longitude

Google Maps clickable link

Output screenshots are available in the output/ folder.

12. Applications

Vehicle tracking system

Anti-theft vehicle security

Fleet management systems

Emergency and rescue operations

Asset and logistics tracking

13. Advantages

Low cost and easy implementation

No internet dependency on Arduino

High reliability

Portable and scalable

Suitable for real-time applications

14. Limitations

SMS delay depends on GSM network

Initial GPS lock time may vary

GSM module requires high current power supply

15. Future Scope

Integration with ESP32 for IoT cloud tracking

Live web dashboard for monitoring

Speed and distance calculation

Mobile application integration

Data logging and analytics

16. Repository Structure
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

17. Author

Hemant Shelar
Electronics & Telecommunication Engineering (ENTC)
Embedded Systems | Arduino | IoT

18. License

This project is licensed under the MIT License, allowing free use, modification, and distribution.

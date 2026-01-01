#include <SoftwareSerial.h>
#include <TinyGPS++.h>

/* ---------- PIN DEFINITIONS ---------- */
// GPS Module
#define GPS_RX 4   // Arduino receives from GPS TX
#define GPS_TX 3   // Arduino transmits to GPS RX

// GSM Module
#define GSM_RX 7   // Arduino receives from GSM TX
#define GSM_TX 8   // Arduino transmits to GSM RX

/* ---------- OBJECT CREATION ---------- */
SoftwareSerial gpsSerial(GPS_RX, GPS_TX);
SoftwareSerial gsmSerial(GSM_RX, GSM_TX);
TinyGPSPlus gps;

/* ---------- USER SETTINGS ---------- */
const char PHONE_NUMBER[] = "+91XXXXXXXXXX"; // <-- replace with your number

/* ---------- SETUP ---------- */
void setup() {
  Serial.begin(9600);
  gpsSerial.begin(9600);
  gsmSerial.begin(9600);

  Serial.println("System Initializing...");
  delay(2000);

  // GSM initialization
  gsmSerial.println("AT");
  delay(1000);

  gsmSerial.println("AT+CMGF=1");   // SMS text mode
  delay(1000);

  Serial.println("Initialization Complete");
}

/* ---------- LOOP ---------- */
void loop() {
  while (gpsSerial.available() > 0) {
    gps.encode(gpsSerial.read());

    if (gps.location.isValid() && gps.location.isUpdated()) {

      float latitude  = gps.location.lat();
      float longitude = gps.location.lng();

      Serial.print("Latitude: ");
      Serial.println(latitude, 6);
      Serial.print("Longitude: ");
      Serial.println(longitude, 6);

      String googleMapsLink = "https://www.google.com/maps?q=";
      googleMapsLink += String(latitude, 6);
      googleMapsLink += ",";
      googleMapsLink += String(longitude, 6);

      sendSMS(googleMapsLink);

      delay(20000); // wait 20 seconds before next SMS
    }
  }
}

/* ---------- FUNCTION TO SEND SMS ---------- */
void sendSMS(String message) {
  gsmSerial.print("AT+CMGS=\"");
  gsmSerial.print(PHONE_NUMBER);
  gsmSerial.println("\"");
  delay(1000);

  gsmSerial.println("Vehicle Location:");
  gsmSerial.println(message);
  delay(500);

  gsmSerial.write(26);  // CTRL+Z to send SMS
  delay(5000);

  Serial.println("SMS Sent");
}

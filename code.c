#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

#define BLYNK_TEMPLATE_ID "TMPL3DRI029zw"
#define BLYNK_TEMPLATE_NAME "FIRE DETECTION"
#define BLYNK_AUTH_TOKEN "hYEXrLHkcH_kJY8u5g03yEp6G7_a3eC-"
// Flame Sensor
const int flamePin = D1;  // Flame sensor pin

// Buzzer
const int buzzerPin = D2;  // Buzzer pin

// LED
const int ledPin = D3;  // LED pin

// Blynk
char auth[] = "hYEXrLHkcH_kJY8u5g03yEp6G7_a3eC-";
char ssid[] = "hh";
char pass[] = "12345678";

void setup() { 
  pinMode(flamePin, INPUT);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);
 
  Serial.begin(9600);
  Blynk.begin(auth, ssid, pass);
}

void loop() {
  int flameValue = digitalRead(flamePin);  // Read flame sensor value

  if (flameValue == HIGH) {
    Serial.println("System is ON");
    digitalWrite(buzzerPin, HIGH);  // Turn on buzzer
    digitalWrite(ledPin, HIGH);     // Turn on LED
    Blynk.virtualWrite(V1,99);    // Set gauge value to maximum (255)
    Blynk.logEvent("fire_detected");
  } 
  else {
     Serial.println("System is OFF");
    digitalWrite(buzzerPin, LOW);   // Turn off buzzer
    digitalWrite(ledPin, LOW);      // Turn off LED
    Blynk.virtualWrite(V1,10);      // Set gauge value to minimum (0)
  }

  Blynk.run();
}

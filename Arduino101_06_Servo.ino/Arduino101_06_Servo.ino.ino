/*
  Bewegt einen Servo
 */

#include <Servo.h> // Fügt den Inhalt einer zweiten Datei die "Servo.h" heisst in dieses Programm ein. Dies nennt man auch Bibliothek

Servo myservo;  // Erstellt ein Servo Objekt um einen Servo zu kontrollieren (bis zu 12 auf den meisten Arduino-Boards möglich)

int pos = 0;    // Variable, welche die Position des Servos speichert

// Die Setup-Schleife läuft nach dem Start des Arduino genau 1x durch
void setup() {
  myservo.attach(9);  // Sagt unserem Servo-Objekt, dass die Ausgabe über Pin 9 erfolgen soll.
}

// Die Loop-Funktion wiederholt sich immer wieder solange das Gerät Strom hat.
void loop() {
  for (pos = 0; pos <= 180; pos += 1) { // Geht von 0 bis 180 Grad in Schritten von 1°
    myservo.write(pos);              // Gibt die Gewünschte Position "pos" an den Servo in Form einer PWM-Welle durch
    delay(15);                       // Wartet 15ms bis der Servo diese Position erreicht hat
  }
  for (pos = 180; pos >= 0; pos -= 1) { // Geht von 180 bis 0 Grad in Schritten von 1°
    myservo.write(pos);              // Gibt die Gewünschte Position "pos" an den Servo in Form einer PWM-Welle durch
    delay(15);                       // Wartet 15ms bis der Servo diese Position erreicht hat
  }
}


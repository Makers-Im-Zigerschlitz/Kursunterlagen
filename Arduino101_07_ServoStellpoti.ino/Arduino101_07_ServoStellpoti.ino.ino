/*
  Bewegt einen Servo anhand eines Drehreglers
 */

#include <Servo.h> // Fügt den Inhalt einer zweiten Datei die "Servo.h" heisst in dieses Programm ein. Dies nennt man auch Bibliothek

Servo myservo;  // Erstellt ein Servo Objekt um einen Servo zu kontrollieren (bis zu 12 auf den meisten Arduino-Boards möglich)


int potpin = 0;   // Analoger Pin an welchem das Potentiometer angehängt ist
int val;          // Variable in welcher der Wert vom analogen Pin gespeichert wird

// Die Setup-Schleife läuft nach dem Start des Arduino genau 1x durch
void setup() {
  myservo.attach(9);  // Sagt unserem Servo-Objekt, dass die Ausgabe über Pin 9 erfolgen soll.
}

// Die Loop-Funktion wiederholt sich immer wieder solange das Gerät Strom hat.
void loop() {
  val = analogRead(potpin);            // Lies den Wert des Potentiometers aus und wandelt die Spannung in eine Zahl von 0 bis 1023
  val = map(val, 0, 1023, 0, 180);     // Skaliert die Zahl so, dass sie einem Wert zwischen 0 und 180 entspricht
  myservo.write(val);                  // Sendet diese Gradzahl dem Servo und lässt diesen an die richtige Position bewegen
  delay(15);                           // Verzögerung bis der Servo seine Position erreicht hat
}


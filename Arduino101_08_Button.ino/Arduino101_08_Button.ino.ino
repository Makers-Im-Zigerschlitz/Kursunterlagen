/*
  Stellt ein LED an oder aus wenn ein Knopf gedrück wird. 
  Als LED wird das auf dem Board integrierte LED des Pins 13 verwendet.
 */
 
// Konstanten festlegen: Konstanten können im Programm nicht überschrieben werden.
const int buttonPin = 2;     // Der Pin an welchem der Knopf angehängt ist
const int ledPin =  13;      // Der Pin an welchem das LED angehängt ist

// variables will change:
int buttonState = 0;         // Variable in welcher der Leucht-Zustand des LEDs zwischengespeichert wird.

// Die Setup-Schleife läuft nach dem Start des Arduino genau 1x durch
void setup() {
  pinMode(ledPin, OUTPUT);   // Der Pin an welchem das LED angehängt ist soll ein Ausgang sein
  pinMode(buttonPin, INPUT); // Der Pin an welchem der Taster angehängt ist soll ein Eingang sein
}

// Die Loop-Funktion wiederholt sich immer wieder solange das Gerät Strom hat.
void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(buttonPin);  // Liest den aktuellen Zustand des LEDs aus der Variable "buttonState" aus.
  
  if (buttonState == HIGH) {             // Prüft ob der Knopf in diesem Moment gerade gedrückt wird
    digitalWrite(ledPin, HIGH);          // Schaltet die LED ein
  } else {
    digitalWrite(ledPin, LOW);           // Schaltet die LED aus
  }
}


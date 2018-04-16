/*
  Analoge Werte auslesen
  Der Arduino kann nicht nur 0 und 1, resp. 0V und 5V auseinanderhalten, sondern auch viele Stufen dazwischen. 
  Da der Analog-Digital-Converter (ADC) 8bit zur Verfügung hat, können die 5V in 1024 (von 0 bis 1023) Stufen eingeteilt werden.

  Entsprechend dieser Messung lassen wir die LED entsprechend viele Millisekunden leuchten, bevor sie wieder ausgeschaltet wird.
 */

// Variabeln oder Konstanten deklarieren
int sensorPin = A0;     // Den Eingangspin für das Potentiometer festlegen (muss analog sein)
int ledPin = 13;        // Den Ausgangspin für das LED festlegen
int sensorValue = 0;    // Eine Variable festlegen, indem der ausgelesene Wert des Potentiometers zwischengespeichert wird.

// Die Setup-Schleife läuft nach dem Start des Arduino genau 1x durch
void setup() {
  pinMode(ledPin, OUTPUT); // Der Pin mit dem Inhalt der Variable ledPin wird als Ausgang festgelegt
}

// Die Loop-Funktion wiederholt sich immer wieder solange das Gerät Strom hat.
void loop() {
  sensorValue = analogRead(sensorPin);  // Die Spannung am Potentiometer in eine Zahl umwandeln und in die Variable sensorValue ablegen.
  digitalWrite(ledPin, HIGH);           // Das LED am Pin "ledPin" einschalten
  delay(sensorValue);                   // Das Programm für so viele Millisekunden unterbrechen wie in "sensorValue" festgelegt wurde.
  digitalWrite(ledPin, LOW);            // Das LED am Pin "ledPin" wieder ausschalten
  delay(sensorValue);                   // Erneut so viele Millisekunden warten wie in "sensorValue" festgelegt wurde.
}


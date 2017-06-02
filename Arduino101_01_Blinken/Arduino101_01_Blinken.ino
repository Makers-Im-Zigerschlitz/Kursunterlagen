/*
  Blinken

  Die meisten Arduinos haben eine LED direkt auf dem Arduino eingebaut. Auf dem Arduino Uno hängt das LED am Pin 13. 
 */


// Die Setup-Schleife läuft nach dem Start des Arduino genau 1x durch
void setup() {
  // Den ditialen Pin Nummer 13 als Ausgang festlegen. 
  pinMode(13, OUTPUT);
}

// Die Loop-Funktion wiederholt sich immer wieder solange das Gerät Strom hat.
void loop() {
  digitalWrite(13, HIGH);   // LED einschalten (HIGH beschreibt den Spannungszustand des digitalen Pins - hier 5V)
  delay(1000);              // 1 Sekunde lang warten
  digitalWrite(13, LOW);    // LED ausschalten (LOW beschreibt den Spannungszustand des digitalen Pins - hier 0V)
  delay(1000);              // 1 Sekunde lang warten
}

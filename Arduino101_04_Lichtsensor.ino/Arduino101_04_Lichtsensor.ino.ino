/*
  Analoge Werte auslesen
  Der Arduino kann nicht nur 0 und 1, resp. 0V und 5V auseinanderhalten, sondern auch viele Stufen dazwischen. 
  Da der Analog-Digital-Converter (ADC) 8bit zur Verfügung hat, können die 5V in 1024 (von 0 bis 1023) Stufen eingeteilt werden.

  Entsprechend dieser Messung lassen wir die LED entsprechend viele Millisekunden leuchten, bevor sie wieder ausgeschaltet wird.
 */

// Die Setup-Schleife läuft nach dem Start des Arduino genau 1x durch
void setup() {
  Serial.begin(9600); // Wir starten den SerialMonitor und legen fest, dass wir auf 9600 bits pro Sekunde warten.
}

// Die Loop-Funktion wiederholt sich immer wieder solange das Gerät Strom hat.
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);     // Lies den Wert am Pin 0 aus, wandle ihn in eine Zahl um und speichere diese in "sensorValue"
  Serial.println(sensorValue);          // Sende diese Zahl als Nachricht zum SerialMonitor
  delay(1);                             // Eine kurze Verzögerung hilft die Stabilität des Programms zu verbessern
}


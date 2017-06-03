/*
  Unsere Mood Lampe

  Bereit von Euch angepasst zu werden.
  Wir benutzen hier den Common Kathode Modus (alle negativen Pole sind zusammengehängt)
 */

// Konstanten festlegen: Konstanten können im Programm nicht überschrieben werden.
const int redPin = 10;      // Der Pin an welchem das rote LED angehängt ist
const int greenPin = 9;     // Der Pin an welchem das grüne LED angehängt ist
const int bluePin = 11;      // Der Pin an welchem das blaue LED angehängt ist

// Die Setup-Schleife läuft nach dem Start des Arduino genau 1x durch
void setup() {
  setColorRgb(0,0,0);      // Beginne das Programm mit allen LEDs ausgeschaltet
}

// Die Loop-Funktion wiederholt sich immer wieder solange das Gerät Strom hat.
void loop() {
  // Festlegen eines Array = eine Variable mit 3 Speicherpositionen für die Farbwerte R, G und B
  unsigned int rgbColor[3];

  // Beginnen wir mit einem roten LED
  rgbColor[0] = 255;
  rgbColor[1] = 0;
  rgbColor[2] = 0;

  // Wählt aus welche Farben an Intensität zu- oder abnehmen sollen.
  for (int decColor = 0; decColor < 3; decColor += 1) {

    int incColor;
    if (decColor == 2) {
        incColor = 0;
    } else {
        incColor = decColor +1;
    }

    // Zwei Farben Cross-Faden: Von einer zur anderen Farbe übergehen
    for(int i = 0; i < 255; i += 1) {
      rgbColor[decColor] -= 1;
      rgbColor[incColor] += 1;

      setColorRgb(rgbColor[0], rgbColor[1], rgbColor[2]);
      delay(5);
    }
  }
}

void setColorRgb(unsigned int red, unsigned int green, unsigned int blue) {
  analogWrite(redPin, red);       //Sende den roten Farbanteil an das LED
  analogWrite(greenPin, green);   //Sende den grünen Farbanteil an das LED
  analogWrite(bluePin, blue);     //Sende den blauen Farbanteil an das LED
 }

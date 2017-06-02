/*
  Eine Melodie über einen Lautsprecher ausgeben
 */

#include "pitches.h" // Fügt den Inhalt einer zweiten Datei die "pitches.h" heisst in dieses Programm ein

// Noten der Melodie:
int melody[] = {
  NOTE_C4, NOTE_G3, NOTE_G3, NOTE_A3, NOTE_G3, 0, NOTE_B3, NOTE_C4
};

// Tondauer festlegen: 4 = Viertelnote, 8 = Achtelnote, etc.:
int noteDurations[] = {
  4, 8, 8, 4, 4, 4, 4, 4
};

// Die Setup-Schleife läuft nach dem Start des Arduino genau 1x durch
void setup() {
  // Wir gehen durch die einzelnen Töne der oben festgelegten Melodie durch
  for (int thisNote = 0; thisNote < 8; thisNote++) {

    // Um die Dauer einer einzelnen Note festzulegen, können wir 1 Sekunde = 1000ms geteilt durch die Tondauer teilen
    // Beispiel: Viertelnote = 1000 / 4, Achtelnote = 1000/8, etc...
    
    int noteDuration = 1000 / noteDurations[thisNote];
    tone(8, melody[thisNote], noteDuration);

    // Um die einzelnen Noten auseinanderhalten zu können, legen wir eine kleine Pause zwischen den Tönen ein
    // Hier wird die Pause auf +30% der Notenlänge festgelegt.
    int pauseBetweenNotes = noteDuration * 1.30;
    delay(pauseBetweenNotes);
    // Den aktuell abgespielten Ton wieder beenden
    noTone(8);
  }
}

// Die Loop-Funktion wiederholt sich immer wieder solange das Gerät Strom hat.
void loop() {
  // Wird hier nicht benötigt
}


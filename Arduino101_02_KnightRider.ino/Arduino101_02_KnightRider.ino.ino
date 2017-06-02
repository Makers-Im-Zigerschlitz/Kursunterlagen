/*
  KnightRider

  Wir lassen die LEDs nacheinander blinken und erzeugen so einen Scanner-Effekt
 */

int wartezeit = 500;

// Die Setup-Schleife läuft nach dem Start des Arduino genau 1x durch
void setup() {
  pinMode(3, OUTPUT); //Die Pins 3,5,6,10 und 11 sind alle digital und werden als Ausgänge festgelegt
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
}

// Die Loop-Funktion wiederholt sich immer wieder solange das Gerät Strom hat.
void loop() {
  digitalWrite(11, HIGH); // Den Pin 11 auf 5V = HIGH setzen
  delay(wartezeit);  
  digitalWrite(10, HIGH); // Den Pin 10 auf 5V = HIGH setzen
  delay(wartezeit);    
  digitalWrite(11, LOW);  // Den Pin 11 auf 0V = LOW setzen
  digitalWrite(6, HIGH);  // Den Pin 6 auf 5V = HIGH setzen
  delay(wartezeit);     
  digitalWrite(10, LOW);  // Den Pin 10 auf 0V = LOW setzen
  digitalWrite(5, HIGH);  // Den Pin 5 auf 5V = HIGH setzen
  delay(wartezeit);  
  digitalWrite(6, LOW);  // Den Pin 6 auf 0V = LOW setzen
  digitalWrite(3, HIGH);  // Den Pin 3 auf 5V = HIGH setzen
  delay(wartezeit); 
  digitalWrite(5, LOW);  // Den Pin 5 auf 0V = LOW setzen
  delay(wartezeit); 
  digitalWrite(5, HIGH);  // Den Pin 5 auf 5V = HIGH setzen
  delay(wartezeit);   
  digitalWrite(3, LOW);  // Den Pin 3 auf 0V = LOW setzen
  digitalWrite(6, HIGH);  // Den Pin 6 auf 5V = HIGH setzen
  delay(wartezeit);
  digitalWrite(5, LOW);  // Den Pin 5 auf 0V = LOW setzen
  digitalWrite(10, HIGH); // Den Pin 10 auf 5V = HIGH setzen
  delay(wartezeit);    
  digitalWrite(6, LOW);  // Den Pin 6 auf 0V = LOW setzen
  digitalWrite(11, HIGH); // Den Pin 11 auf 5V = HIGH setzen
  delay(wartezeit);   
  digitalWrite(10, LOW);  // Den Pin 10 auf 0V = LOW setzen 
}


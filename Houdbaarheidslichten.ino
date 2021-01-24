// Pin 13 has an LED connected on most Arduino boards.
// give it a name:
int ledrood = 13;
int ledgroen =     12;
 
// the setup routine runs once when you press reset:
void setup() {                
  // initialize the digital pin as an output.
  pinMode(ledrood, OUTPUT);  
  pinMode(ledgroen, OUTPUT);     
}
 
// the loop routine runs over and over again forever:
void loop() {
  digitalWrite(ledgroen, HIGH);   // LED groen aan

  delay(1000);               // seconde wachten

    digitalWrite(ledrood, HIGH);   // LED rood aan

    delay(1000);
    
  digitalWrite(ledrood, LOW);    // LED rood uit
    digitalWrite(ledgroen, LOW);    // LED groen uit
  delay(1000);               // seconde wachten


    digitalWrite(ledrood, HIGH);   // LED rood aan

  delay(1000);               // seconde wachten

    digitalWrite(ledgroen, HIGH);   // // LED groen aan

    delay(1000);
    
  digitalWrite(ledrood, LOW);    // LED rood uit
    digitalWrite(ledgroen, LOW);    // LED groen uit
  delay(1000);               // seconde wachten

  digitalWrite(ledgroen, HIGH);
  digitalWrite(ledrood, HIGH);
  delay(2000);
  digitalWrite(ledgroen, LOW);
  digitalWrite(ledrood, LOW);
  delay(1000);
}

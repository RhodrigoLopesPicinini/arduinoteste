void setup() {
  pinMode(12, OUTPUT); //LED VERDE
  pinMode(9, OUTPUT);  //LED AMARELO
  pinMode(7, OUTPUT);  //LED VERMELHO
  
  pinMode(4, OUTPUT);  // LED VERDE 2
  pinMode(3, OUTPUT);  // LED AMARELO 2
  pinMode(2, OUTPUT);  // LED VERMELHO 2

}


void loop() {
  //
 digitalWrite(12, HIGH);
 digitalWrite(9, LOW);
 digitalWrite(7, LOW);
 digitalWrite(4, LOW);
 digitalWrite(3, LOW);
 digitalWrite(2, HIGH);
  delay(1000);
 digitalWrite(12, LOW);
 digitalWrite(9, HIGH);
 digitalWrite(7, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(3, LOW);
 digitalWrite(2, LOW);
   delay(1000);
  //
 digitalWrite(12, LOW);
 digitalWrite(9, LOW);
 digitalWrite(7, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(3, HIGH);
 digitalWrite(2, LOW);
   delay(1000);
 digitalWrite(12, HIGH);
 digitalWrite(9, LOW);
 digitalWrite(7, LOW);
 digitalWrite(4, LOW);
 digitalWrite(3, LOW);
 digitalWrite(2, HIGH);
   delay(1000); 
  //
 digitalWrite(12, LOW);
 digitalWrite(9, HIGH);
 digitalWrite(7, LOW);
 digitalWrite(4, HIGH);
 digitalWrite(3, LOW);
 digitalWrite(2, LOW);
   delay(1000);
 digitalWrite(12, LOW);
 digitalWrite(9, LOW);
 digitalWrite(7, HIGH);
 digitalWrite(4, LOW);
 digitalWrite(3, HIGH);
 digitalWrite(2, LOW);
   delay(1000);
 
}


 
  
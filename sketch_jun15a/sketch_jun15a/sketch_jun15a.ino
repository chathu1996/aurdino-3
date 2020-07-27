void setup() {
  Serial.begin(9600);
}



int inputvalue;
void loop() {
 inputvalue=analogRead(A0);
 Serial.println(inputvalue);


   delay(100);
}

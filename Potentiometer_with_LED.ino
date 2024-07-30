void setup() {

Serial.begin(9600);
pinMode(6,OUTPUT);
}

void loop() {
 int Value=analogRead(A0);
 Serial.println(Value);

  int converted=map(Value,0,1023,0,255);
 
 analogWrite(6,converted);

}
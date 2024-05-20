#define pinSensor 4
#define LINHA HIGH

void setup() {
  Serial.begin (9600);

  pinMode(pinSensor, INPUT);

}

void loop() {

  bool val = digitalRead(pinSensor);

  if (val== 1)
  {
     Serial.println("branco");
  } 
  else 
  {
     Serial.println("preto");
  }
  delay(1000);
}

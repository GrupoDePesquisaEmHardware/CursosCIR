#define SENSOR_LINHA 4

int linha;

void setup() {
  Serial.begin(9600);

  pinMode(SENSOR_LINHA, INPUT);
}

void loop() {

  linha = digitalRead(SENSOR_LINHA);

  if (linha == 1)
  {
     Serial.println("branco");
  } 
  else 
  {
     Serial.println("preto");
  }
  
  delay(1000);
}

#include <Ultrasonic.h>

#define AIA  3
#define AIB  9
#define BIA 10 
#define BIB  6 

// Definição dos pinos dos sensores e motores
const int sensorEsq = 12;  // Sensor de refletância esquerdo
const int sensorDir = 13;  // Sensor de refletância direito

// Define os pinos de trigger e echo
const int trigPin = 8;
const int echoPin = 7;

// Cria uma instância do objeto Ultrasonic
Ultrasonic ultrasonic(trigPin, echoPin);

int speed = 250;

void setup(){
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);

  Serial.begin(115200);

  // Configuração dos pinos dos sensores como entrada
  pinMode(sensorEsq, INPUT);
  pinMode(sensorDir, INPUT);

  stop();
}

void loop() {
   // Lê a distância em centímetros
  long distancia = ultrasonic.distanceRead();

  // Leitura dos sensores
  int leituraEsq = digitalRead(sensorEsq);
  int leituraDir = digitalRead(sensorDir);

  Serial.print("Distance in CM: ");
  Serial.println(distancia);
  
  // Condições para seguir a linha
  while(distancia > 10)
  {
    leituraEsq = digitalRead(sensorEsq);
    leituraDir = digitalRead(sensorDir);  
    
    if (leituraEsq == LOW && leituraDir == LOW) {
      // Ambos sensores na linha, vai em frente
      forward();
    } else if (leituraEsq == LOW && leituraDir == HIGH) {
      // Apenas o sensor esquerdo na linha, vira para a esquerda
      forward_esq();
      backward_dir();
    } else if (leituraEsq == HIGH && leituraDir == LOW) {
      // Apenas o sensor direito na linha, vira para a direita
      forward_dir();
      backward_esq();
    } 
    else 
    {
      // Ambos sensores fora da linha, para (ou pode definir outra ação)
      backward();
    }
    distancia = ultrasonic.distanceRead();
  }
  stop();
}

void backward()
{
  analogWrite(AIA, 0);
  analogWrite(AIB, speed);
  analogWrite(BIA, 0);
  analogWrite(BIB, speed);
}

void forward()
{
  analogWrite(AIA, speed);
  analogWrite(AIB, 0);
  analogWrite(BIA, speed);
  analogWrite(BIB, 0);
}

void backward_esq()
{
  analogWrite(AIA, 0);
  analogWrite(AIB, speed);
}

void backward_dir()
{
  analogWrite(BIA, 0);
  analogWrite(BIB, speed);
}

void forward_esq() 
{
  analogWrite(AIA, speed);
  analogWrite(AIB, 0);
}

void forward_dir()
{
  analogWrite(BIA, speed);
  analogWrite(BIB, 0);
}

void stop()
{
  analogWrite(BIA, 0);
  analogWrite(BIB, 0);
  analogWrite(AIA, 0);
  analogWrite(AIB, 0);
}

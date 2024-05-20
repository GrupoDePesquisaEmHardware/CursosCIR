#define dirFrente 9
#define dirTras   3
#define esqFrente 10
#define esqTras   11

int velocidade = 150;
int vel = 120;
int temp = 1500;

void setup() {
  Serial.begin (9600);
  
  pinMode(dirFrente,  OUTPUT);
  pinMode(dirTras,    OUTPUT);
  pinMode(esqFrente,  OUTPUT);
  pinMode(esqTras,    OUTPUT);

  digitalWrite(dirFrente,  LOW);
  digitalWrite(dirTras,    LOW);
  digitalWrite(esqFrente,  LOW);
  digitalWrite(esqTras,    LOW);
}

void loop() {
    //Frente
    analogWrite (esqFrente,velocidade);
    digitalWrite(esqTras,LOW);
    analogWrite (dirFrente,velocidade);
    digitalWrite(dirTras,LOW);
    delay(temp);

    //Trás
    digitalWrite(esqFrente,LOW);
    analogWrite (esqTras,vel);
    analogWrite (dirFrente,vel);
    digitalWrite(dirTras, LOW);
    delay(temp);

    //Direita
    analogWrite (esqFrente,vel);
    digitalWrite(esqTras,LOW);
    digitalWrite(dirFrente,LOW);
    analogWrite (dirTras,vel);
    delay(temp);
  
    //Parado
    digitalWrite(esqFrente,  HIGH);
    digitalWrite(esqTras,    HIGH);
    digitalWrite(dirFrente,  HIGH);
    digitalWrite(dirTras,    HIGH);
    delay(temp);

    //Esquerda
    digitalWrite(esqFrente,LOW);
    analogWrite (esqTras,velocidade);
    digitalWrite(dirFrente,LOW);
    analogWrite (dirTras,velocidade);
    delay(temp);

    //Parado
    digitalWrite(esqFrente,  HIGH);
    digitalWrite(esqTras,    HIGH);
    digitalWrite(dirFrente,  HIGH);
    digitalWrite(dirTras,    HIGH);
    delay(temp);
  }

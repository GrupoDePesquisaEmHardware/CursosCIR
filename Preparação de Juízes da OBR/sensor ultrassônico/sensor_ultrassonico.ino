#define TRIG 11
#define ECHO 10

float distance;

int ler()
{
  unsigned long timeInicio, timeDuracao;
  digitalWrite(TRIG, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG, LOW);
  
  while(digitalRead(ECHO) == LOW) {}
  
  timeInicio = micros();
  while(digitalRead(ECHO) == HIGH) {}
	 
  timeDuracao = micros() - timeInicio;
  Serial.println(timeDuracao);
	
  return (timeDuracao/55);
}


void setup()
{
  Serial.begin(9600);
  
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);
  
  digitalWrite(TRIG, LOW);
}

void loop()
{
  	distance = ler();
  
  	Serial.print("Distancia: ");
  	Serial.println(distance);
  
  	delay(100);
}

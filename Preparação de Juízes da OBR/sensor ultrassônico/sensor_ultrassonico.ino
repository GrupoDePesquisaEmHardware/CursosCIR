#define TRIG 11
#define ECHO 10

float distancia;

int ler()
{
  unsigned long timeDuracao;
	
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  
  timeDuracao = pulseIn(ECHO, HIGH);
	
  return (timeDuracao/58);
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
  distancia = ler();
  
  Serial.print("Distancia: ");
  Serial.println(distancia);
  
  delay(100);
}

#define AIA  3 
#define AIB  9 
#define BIA 10 
#define BIB  6  

int speed = 255;
int temp = 100;

void setup() 
{
  Serial.begin(9600);
  
  pinMode(AIA, OUTPUT);
  pinMode(AIB, OUTPUT);
  pinMode(BIA, OUTPUT);
  pinMode(BIB, OUTPUT);

  stop();
}

void loop()
{
    forward();
    delay(temp);

    backward();
    delay(temp);
  
    forward_dir();
    backward_esq();
    delay(temp);

    forward_esq();
    backward_dir();
    delay(temp);

    stop();
    delay(temp);
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

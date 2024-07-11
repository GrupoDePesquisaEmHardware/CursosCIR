#define AIA 3 
#define AIB 9 
#define BIA 10 
#define BIB 6  

byte speed= 255;

void setup(){
  pinMode (AIA, OUTPUT);
  pinMode (AIB, OUTPUT);
  pinMode (BIA, OUTPUT);
  pinMode (BIB, OUTPUT);
}

void loop (){
  //frente
  forward_dir();
  forward_esq();
  delay (2000);
  
  //tras
  backward_esq();
  backward_dir();
  delay(2000);

  //esquerda
  backward_esq();
  forward_dir();
  delay(2000);

  //direita
  backward_dir();
  forward_esq();
  delay(2000);

  //parar
  desliga();
}

void backward_esq(){
analogWrite(AIA,0);
analogWrite(AIB,speed);
}

void backward_dir(){
analogWrite(BIA,0);
analogWrite(BIB,speed);
}

void forward_esq(){
analogWrite(AIA,speed);
analogWrite(AIB,0);
}
void forward_dir(){
analogWrite(BIA,speed);
analogWrite(BIB,0);
}

void desliga(){
  analogWrite(BIA,0);
  analogWrite(BIB,0);
  analogWrite(AIA,0);
  analogWrite(AIB,0);
}

# Controle de Motores DC com Arduino
## Introdução
O controle de motores DC (corrente contínua) usando um Arduino é uma prática comum em projetos de automação e robótica. Este documento fornece uma visão geral do comportamento de motores DC quando controlados por um Arduino, incluindo suas limitações e zonas de funcionamento.

(Colocar uma imagem do motor Dc)

# Materiais Necessários
- Arduino (Uno, Mega, etc.)
- Motor DC
- Driver de Motor (A colocar)
- Fonte de Alimentação (baterias, adaptador AC/DC)
- Fios de Conexão
- Protoboard (opcional)
## Funcionamento
### Conceitos Básicos
Um motor DC converte energia elétrica em energia mecânica, permitindo o movimento em uma direção específica. O controle da velocidade e direção pode ser realizado ajustando a tensão aplicada e a polaridade da corrente elétrica que alimenta o motor.
### Controle com Arduino
O Arduino, sendo um microcontrolador, pode enviar sinais digitais e PWM (Pulse Width Modulation) para um driver de motor, que por sua vez controla o motor DC. O PWM é usado para ajustar a velocidade do motor ao variar a largura dos pulsos da tensão fornecida. Além disso, as configuraações, para comunicação com o microcontrolador, serão estabelecidas a partir dos pinos digitais do arduino.

(Colocar uma imagem se referenciando os pinos digitais)

### Ponte H
**O que é uma Ponte H?**

Uma ponte H é um circuito eletrônico que permite que a tensão seja aplicada através de uma carga em qualquer direção. No contexto de controle de motores, a ponte H é essencial para controlar a direção do motor DC. Utilizando transistores ou outros componentes de comutação, a ponte H pode inverter a polaridade da tensão aplicada ao motor, permitindo que ele gire tanto no sentido horário quanto anti-horário.

(Colocar uma imagem de uma ponte H)

**Importância da Ponte H no Controle de Direção**

A ponte H é crucial para o controle bidirecional de motores DC. Sem ela, o motor poderia apenas girar em uma única direção. Drivers de motor como o L298N e o L293D incorporam a ponte H, facilitando o controle da direção e da velocidade do motor através de sinais enviados pelo Arduino.

## Exemplo de código utilizado para o controle de motor DC
```
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
```

## Funções Presentes no Código

- **#define** : Define constantes para respectivos pinos do arduino, no caso, os pinos digitais com saídas pwm;
- **Variáveis globais** : As variáveis globais definem parâmetros que podem receber outros valores durante a operação. No caso, as contantes:
  - Velocidade:  Define a velocidaide principal dos motores;
  - Vel: Define uma segunda velocidade para operações de mudança de direção;
  - Temp: Define o tempo em milissegundos entre cada ação.
- **Void Setup()**: Chamada uma única vez quando o Arduino é ligado. Esta função inicializa a comunicação serial e configura os pinos com saídas.
  - ```Serial.begin(baudrate)```: inicializa a comunicação serial entre o Arduino e o computador ou qualquer outro dispositivo serial na qual permite o envio e recebimento de dados através da porta serial.
      - Baudrate: é a taxa de tranmissão de dados em bits por segundos (bps). Os valores mais comuns de baudrate são: 9660, 14400, 19200, 38400, 57600 ente outros.
- **Void Loop()**: Função chamada repetidas vezes e contém a lógica principal para o controle dos motores.
    - ```digitalWrite(pin, estado)```: Essa função é usada para controlar pinos digitais no Arduino. Ela define o estado de um pino como HIGH (5V) ou LOW (0V);
    - ```analogWrite(pin, valor)```: Essa função é usada para pinos de modulação por largura de pulso (PWM). Ela gera saídas semelhantes a analógicas com intensidade variável.
    - ```delay(ms)```: Essa função é usada para pausar a execução do programa por um período de tempo determinado, especificado em milissegundos (ms).
 
## Conclusão
O controle de direção, velocidade e sentido de operação de qualquer motor DC pode ser facilmente implementado seguindo as instruções presentes nesse pequeno resumo. Esperamos que o conteúdo produzido até aqui tenha produzido em você o desejo de aprofundar-se ainda mais em projetos maker que envolva arduino e seus módulos.

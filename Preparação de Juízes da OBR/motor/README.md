# Controle de Motores DC com Arduino
## Introdução
Neste repositório, você encontrará conteúdo sobre controle de motores DC (corrente contínua) usando um Arduino que  é uma prática comum em projetos de automação e robótica. Este documento fornece uma visão geral do comportamento de motores DC quando controlados por um Arduino, incluindo suas limitações e zonas de funcionamento.

<div align = "center">
  <img src="https://github.com/Valdemar-Neto/Code-Recognition-color-/assets/108936921/c5f6112b-f8a3-468c-8cee-bd2483b4fc78" width = 250px height= 250px>  
</div>

# Materiais Necessários
- Arduino (Uno, Mega, etc.)
- Motor DC
- Driver de Motor (A colocar)
- Fonte de Alimentação (baterias, adaptador AC/DC)
- Fios de Conexão
- Protoboard (opcional)
## Funcionamento
### Conceitos Básicos
Um motor DC converte energia elétrica em energia mecânica, permitindo o movimento em uma direção específica. O controle da velocidade e direção pode ser realizado ajustando a tensão aplicada e a polaridade da corrente elétrica que alimenta o motor. O Arduino, sendo um microcontrolador, pode enviar sinais digitais e PWM (Pulse Width Modulation) para um driver de motor, que por sua vez controla o motor DC. O PWM é usado para ajustar a velocidade do motor ao variar a largura dos pulsos da tensão fornecida. Além disso, as configuraações, para comunicação com o microcontrolador, serão estabelecidas a partir dos pinos digitais do arduino.

<div align = "center">
  <img src="https://github.com/Valdemar-Neto/Code-Recognition-color-/assets/108936921/502962f1-00c0-4801-bcb4-262caa19ee09" width = 50%>  
</div>

### Ponte H

Uma ponte H é um circuito eletrônico que permite que a tensão seja aplicada através de uma carga em qualquer direção. No contexto de controle de motores, a ponte H é essencial para controlar a direção do motor DC. Utilizando transistores ou outros componentes de comutação, a ponte H pode inverter a polaridade da tensão aplicada ao motor, permitindo que ele gire tanto no sentido horário quanto anti-horário.

<div align = "center">
  <img src="https://github.com/Valdemar-Neto/Code-Recognition-color-/assets/108936921/f55be084-a234-440e-9960-81aac3ff93b8" width = 250px height= 250px>  
</div>

A ponte H é crucial para o controle bidirecional de motores DC. Sem ela, o motor poderia apenas girar em uma única direção. Drivers de motor como o L298N e o L293D incorporam a ponte H, facilitando o controle da direção e da velocidade do motor através de sinais enviados pelo Arduino.

## Exemplo de código utilizado para o controle de motor DC
```
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
```

## Funções Presentes no Código

- ```**#define**``` : Define constantes para respectivos pinos do arduino, no caso, os pinos digitais com saídas pwm;
- ```**Variáveis globais**``` : As variáveis globais definem parâmetros que podem receber outros valores durante a operação. No caso, as contantes:
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

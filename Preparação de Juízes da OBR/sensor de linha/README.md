# Sensor QRE1113

## Introdução

Neste repositório, será apresentado um dos componentes mais importante para a finalidade desse curso, que é o sensor de linha. O QRE1113 é um sensor de reflexão infravermelho (IR) utilizado principalmente para detectar a presença de objetos próximos ou para seguir linhas em projetos de robótica. Ele é composto por um LED infravermelho e um fototransistor, ambos montados em uma única unidade. Quando o LED emite luz IR, qualquer objeto ou superfície refletiva em frente ao sensor irá refletir essa luz de volta para o fototransistor, que então produz um sinal elétrico correspondente.

<div align = "center">
  <img src="https://github.com/Valdemar-Neto/Valdemar-Neto/assets/108936921/2f02c404-8ac1-49fa-a688-6ef2175379d7" width = 250px height= 250px>  
</div>

## Funcionamento

O QRE1113 funciona emitindo luz infravermelha através de seu LED. A luz infravermelha é então refletida por uma superfície ou objeto próximo. O fototransistor detecta essa luz refletida e, dependendo da intensidade da reflexão, o sensor gera uma corrente elétrica que pode ser lida por um microcontrolador ou outro circuito de leitura. Você pode acessar o DataSheet desse sensor [nesse link](https://octopart.com/datasheet/qre1113-onsemi-84331128?msclkid=2bd3f66cff771a7483e6900560e049ed&utm_source=bing&utm_medium=cpc&utm_campaign=b_cpc_latam-br_search_dsa_english_en_usd_all-categories&utm_term=semiconductors&utm_content=Discrete%20Semiconductors%20DSA)

### Diagrama de Funcionamento

1. **Emissão de Luz IR**: O LED infravermelho do QRE1113 emite luz IR.
2. **Reflexão**: A luz IR atinge uma superfície próxima e é refletida de volta.
3. **Detecção**: O fototransistor detecta a luz refletida e gera uma corrente proporcional à intensidade da luz recebida.
4. **Sinal de Saída**: A corrente gerada pelo fototransistor é convertida em um sinal elétrico que pode ser lido por um microcontrolador.

## Aplicações

O QRE1113 é amplamente utilizado em diversas aplicações, incluindo:

- **Robótica**: Para seguimento de linhas e detecção de bordas em robôs móveis.
- **Contadores de Objetos**: Para detectar a presença ou ausência de objetos em esteiras transportadoras.
- **Sistemas de Segurança**: Para detecção de intrusos ou objetos em áreas restritas.
- **Automação Industrial**: Para monitoramento e controle de processos industriais.

## Requisitos para Funcionamento

Para operar corretamente, o sensor QRE1113 tem os seguintes requisitos:

### Alimentação

- **Tensão de Operação**: 5V (pode variar dependendo da aplicação específica)
- **Corrente de Operação**: Aproximadamente 20mA

### Condições Ambientais

- **Temperatura de Operação**: -25°C a +85°C
- **Umidade Relativa**: 5% a 95% sem condensação

### Conexões

- **Anodo do LED (A)**: Conectado à tensão de alimentação através de um resistor limitador de corrente.
- **Catodo do LED (K)**: Conectado ao terra (GND).
- **Coletor do Fototransistor (C)**: Conectado à entrada do microcontrolador ou circuito de leitura.
- **Emissor do Fototransistor (E)**: Conectado ao terra (GND).


### Exemplo de código 
```
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
```

### Funções Presentes no Código

- ```**#define**``` : Define constantes para respectivos pinos do arduino, no caso, os pinos digitais com saídas pwm;
- ```**Variáveis globais**``` : As variáveis globais definem parâmetros que podem receber outros valores durante a operação. No caso, as contantes:
  - PinSensor
  - LINHA
- **Void Setup()**: Chamada uma única vez quando o Arduino é ligado. Esta função inicializa a comunicação serial e configura os pinos com saídas.
  - ```Serial.begin(baudrate)```: inicializa a comunicação serial entre o Arduino e o computador ou qualquer outro dispositivo serial na qual permite o envio e recebimento de dados através da porta serial.
      - Baudrate: é a taxa de tranmissão de dados em bits por segundos (bps). Os valores mais comuns de baudrate são: 9660, 14400, 19200, 38400, 57600 ente outros.
- **Void Loop()**: Função chamada repetidas vezes e contém a lógica principal para o controle dos motores.
    - ```digitalWrite(pin, estado)```: Essa função é usada para controlar pinos digitais no Arduino. Ela define o estado de um pino como HIGH (5V) ou LOW (0V);
    - ```analogWrite(pin, valor)```: Essa função é usada para pinos de modulação por largura de pulso (PWM). Ela gera saídas semelhantes a analógicas com intensidade variável.
    - ```delay(ms)```: Essa função é usada para pausar a execução do programa por um período de tempo determinado, especificado em milissegundos (ms).



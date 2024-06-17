# Sensor Ultrassônico

## Introdução

Neste repositório, será apresentado um dos componentes mais importante para a detecção de objetos na pista, que é o sensor ultrassônico. O sensor ultrassônico é um dispositivo que utiliza ondas sonoras de alta frequência para medir a distância entre o sensor e um objeto. Esses sensores são amplamente utilizados em aplicações de robótica, automação, e sistemas de segurança para detectar objetos e medir distâncias com precisão.


<div align = "center">
  <img src="https://github.com/Valdemar-Neto/Valdemar-Neto/assets/108936921/1c9cdde5-b8c6-43ef-a60a-858578ba3139" width = 250px height= 250px>  
</div>

## Funcionamento

O sensor ultrassônico opera emitindo um pulso de som em uma frequência ultrassônica (geralmente acima de 20 kHz). Esse pulso viaja pelo ar e, quando encontra um objeto, é refletido de volta ao sensor. O sensor então calcula a distância com base no tempo que o pulso levou para retornar. Você pode acessar o DataSheet desse sensor [nesse link](https://octopart.com/datasheet/hc-sr04-osepp-64751802?msclkid=f3a9b27dfed313fb6b86d40d472b6797&utm_source=bing&utm_medium=cpc&utm_campaign=b_cpc_latam-br_search_dsa_english_en_usd_all-categories&utm_term=semiconductors&utm_content=Discrete%20Semiconductors%20DSA)

### Diagrama de Funcionamento

1. **Emissão do Pulso**: O transdutor de emissão do sensor gera um pulso ultrassônico.
2. **Reflexão**: O pulso viaja até encontrar um objeto e é refletido de volta.
3. **Recepção do Pulso**: O transdutor de recepção do sensor detecta o pulso refletido.
4. **Cálculo da Distância**: O tempo decorrido entre a emissão e a recepção do pulso é usado para calcular a distância ao objeto.

## Aplicações

Os sensores ultrassônicos são utilizados em diversas aplicações, tais como:

- **Robótica**: Para navegação e prevenção de colisões.
- **Automação Industrial**: Para medição de nível de líquidos e detecção de objetos.
- **Automóveis**: Em sistemas de estacionamento assistido.
- **Segurança**: Para detectar a presença de intrusos.
- **Domótica**: Em sistemas de alarme e automação residencial.

## Requisitos para Funcionamento

Para operar corretamente, o sensor ultrassônico tem os seguintes requisitos:

### Alimentação

- **Tensão de Operação**: Normalmente 5V (alguns modelos podem operar com 3.3V)
- **Corrente de Operação**: Variável conforme o modelo, geralmente entre 10mA e 50mA

### Condições Ambientais

- **Temperatura de Operação**: -15°C a +70°C
- **Umidade Relativa**: 5% a 95% sem condensação

### Conexões

- **Vcc**: Conectado à tensão de alimentação.
- **GND**: Conectado ao terra.
- **Trigger (Trig)**: Pin de entrada que inicia a medição.
- **Echo (ECHO)**: Pin de saída que emite um pulso de duração proporcional à distância medida.

## Cálculo da Distância

O cálculo da distância com um sensor ultrassônico é feito com base no tempo que o pulso sonoro leva para viajar até o objeto e retornar. A fórmula básica para o cálculo da distância é:

$$\[ \text{Distância} = \frac{\text{Tempo} \times \text{Velocidade do Som}}{2} \]$$

Onde:
- **Tempo** é o intervalo entre a emissão e recepção do pulso, medido em segundos.
- **Velocidade do Som** é aproximadamente 343 m/s a 20°C.



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

- ```#define``` : Define constantes para respectivos pinos do arduino, no caso, os pinos digitais com saídas pwm;
- ```Variáveis globais``` : As variáveis globais definem parâmetros que podem receber outros valores durante a operação. No caso, as contantes:
  - PinSensor
  - LINHA
- **Void Setup()**: Chamada uma única vez quando o Arduino é ligado. Esta função inicializa a comunicação serial e configura os pinos com saídas.
  - ```Serial.begin(baudrate)```: inicializa a comunicação serial entre o Arduino e o computador ou qualquer outro dispositivo serial na qual permite o envio e recebimento de dados através da porta serial.
      - Baudrate: é a taxa de tranmissão de dados em bits por segundos (bps). Os valores mais comuns de baudrate são: 9660, 14400, 19200, 38400, 57600 ente outros.
- **Void Loop()**: Função chamada repetidas vezes e contém a lógica principal para o controle dos motores.
    - ```digitalWrite(pin, estado)```: Essa função é usada para controlar pinos digitais no Arduino. Ela define o estado de um pino como HIGH (5V) ou LOW (0V);
    - ```delay(ms)```: Essa função é usada para pausar a execução do programa por um período de tempo determinado, especificado em milissegundos (ms).




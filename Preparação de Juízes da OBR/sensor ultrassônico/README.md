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
### Descrição da Função ler
A função ler é responsável por emitir um pulso ultrassônico, medir o tempo que leva para o pulso retornar e calcular a distância ao objeto. Ela realiza as seguintes etapas:

1.  Emissão do Pulso Ultrassônico:
    - Define o pino TRIG como HIGH por 10 microsegundos e depois o define como LOW. Isso gera um pulso ultrassônico.
2. Medição do Tempo de Retorno:

   - Aguarda até que o pino ECHO fique HIGH, indicando que o pulso foi enviado e está aguardando o retorno.
   - Marca o tempo de início usando ```micros()```.
   - Aguarda até que o pino ECHO volte a LOW, indicando que o pulso retornou.
   - Calcula a duração do pulso como a diferença entre o tempo atual e o tempo de início.

3. Cálculo da Distância:

   - Converte a duração do pulso em distância, dividindo por 55 para obter a distância em centímetros. O divisor 55 é uma simplificação baseada na velocidade do som e na conversão de microsegundos para centímetros.

### Funções Presentes no Código

- ```pinMode(pin, mode)```: Configura o pino especificado como entrada (INPUT) ou saída (OUTPUT).
- ```digitalWrite(pin, value)```: Define o nível lógico do pino especificado como HIGH (alto) ou LOW (baixo).
- ```delayMicroseconds(us)```: Pausa a execução do programa pelo número especificado de microsegundos.
- ```digitalRead(pin)```: Lê o valor lógico (HIGH ou LOW) do pino especificado.
- ```micros()```: Retorna o número de microsegundos desde que o programa começou a ser executado.
- ```Serial.begin(baudrate)```: Inicializa a comunicação serial com a taxa de transmissão especificada (baudrate).
- ```Serial.print(value)```: Imprime um valor na porta serial.
- ```Serial.println(value)```: Imprime um valor na porta serial, seguido de uma nova linha.
- ```delay(ms)```: Pausa a execução do programa pelo número especificado de milissegundos.



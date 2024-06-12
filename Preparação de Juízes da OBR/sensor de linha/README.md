# Sensor QRE1113

## Introdução

Neste repositório, será apresentado um dos componentes mais importante para a finalidade desse curso, que é o sensor de linha. O QRE1113 é um sensor de reflexão infravermelho (IR) utilizado principalmente para detectar a presença de objetos próximos ou para seguir linhas em projetos de robótica. Ele é composto por um LED infravermelho e um fototransistor, ambos montados em uma única unidade. Quando o LED emite luz IR, qualquer objeto ou superfície refletiva em frente ao sensor irá refletir essa luz de volta para o fototransistor, que então produz um sinal elétrico correspondente.

## Funcionamento

O QRE1113 funciona emitindo luz infravermelha através de seu LED. A luz infravermelha é então refletida por uma superfície ou objeto próximo. O fototransistor detecta essa luz refletida e, dependendo da intensidade da reflexão, o sensor gera uma corrente elétrica que pode ser lida por um microcontrolador ou outro circuito de leitura.

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




# Jogo da Velha

O projeto final do curso de C++ básico consiste em elaborar um Jogo da Velha. Este projeto é utilizado para avaliar o desempenho de cada aluno. Assim, para utilizar do básico da linguagem apresentado ao longo do curso, o aluno possui o arquivo de base com tudo que é preciso para criar o jogo, sendo preciso trabalhar a lógica por trás do funcionamento.

# Interface 
O jogo não possui interfaces gráficas, sendo controlado e vizualizado pelo terminal. As primeiras informações exibidas ao rodar o código são referentes ao tabuleiro e um cabeçalho simples.

![Screenshot from 2024-02-07 20-42-31](https://github.com/otavioacb/Cursos/assets/35488608/5d714948-d333-49d8-bab2-c541c5498b0a)

O tabuleiro será sempre atualizado a cada jogada, seguido do texto que marca a solicitação de um nova posição para o jogador atual. Essa tela vai mudando a cada vez que um jogada válida for enviada. Ao finalizar o jogo, serão exibidas informações sobre o jogador vencedor e um menu simples com as opções novo jogo e reiniciar. 

![Screenshot from 2024-02-07 20-45-46](https://github.com/otavioacb/Cursos/assets/35488608/8038a0a9-7895-497e-99f7-6bc4c716fe49)

Ao selecionar a opção N, o tabuleiro volta a ser exibido e alterado a cada jogada válida. Caso a opção S seja selecionada a execução do programa é encerrada e não exibe mais nenhuma informação.

# Comandos
O jogo sempre começa com o tabuleiro vazio e pedindo para o jogador X definir uma linha e coluna para posicionar sua peça. Em seguida, caso a jogada do jogador anterior seja válida, o jogador O será solicitado para definir uma linha e coluna para posicionar a sua peça. Lembrando, deve ser fornecido o valor da linha seguido do valor da coluna e separados por um espaço.

Quando o jogo é finalizado, o código imprime um menu com 2 opções. Para selecionar a opção sair, você deve digitar S. Caso queira um novo jogo, você deve digitar N.

# Jogadas Válidas
Quando o jogo iniciar será requisitado uma posição para posicionar a peça do jogador. Essa posição deve ser uma linha e coluna que estejam nos limites do tabuleiro. Assim, a linha e coluna devem ser valores maiores que 0 e menores que 3.

![Screenshot from 2024-02-07 20-42-31](https://github.com/otavioacb/Cursos/assets/35488608/5d714948-d333-49d8-bab2-c541c5498b0a)

Quando não fornecido uma jogada válida, o código persiste em solicitar ao mesmo jogador uma nova posição. Dessa forma, o próximo jogador só poderá jogar se o atual fornecer uma posição dentro dos limites do tabuleiro.

![Screenshot from 2024-02-07 20-59-08](https://github.com/otavioacb/Cursos/assets/35488608/86ed9444-78fe-431a-a4b9-8afa112c9ff3)

# Fim de jogo
O jogo da velha é conhecido pelo vencedor ser responsável em alinha 3 peças suas em posições seguidas, seja em colunas, linhas ou diagonais. Porém, o jogo pode encerrar sem haver vencedores, que ocorre quando todas as posições estiverem preenchidas e não existir um trio de peças alinhadas. Assim, é preciso analisar 3 condições para que haja um vencedor e 1 condição para terminar o jogo com empate.

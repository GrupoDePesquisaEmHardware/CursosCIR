#include <iostream>

using namespace std;

/* Defina aqui as variaveis necessarias
 * Vai ser preciso de uma matriz de caracteres
 * Utilize de 2 constante para as linhas e colunas
 * Nao esqueca das variaveis para a entrada do teclado
 */


void inicializar_tabuleiro()
{
  // Defina todos os espacos do tabuleiro como vazios
}

void imprimir_tabuleiro()
{
  cout << "    1   2   3  " << endl;
  cout << "  |---|---|---|" << endl;
  cout << "1 | " << tabuleiro[0][0] << " | " << tabuleiro[0][1] << " | " << tabuleiro[0][2] << " |" << endl;
  cout << "  |---|---|---|" << endl;
  cout << "2 | " << tabuleiro[1][0] << " | " << tabuleiro[1][1] << " | " << tabuleiro[1][2] << " |" << endl;
  cout << "  |---|---|---|" << endl;
  cout << "3 | " << tabuleiro[2][0] << " | " << tabuleiro[2][1] << " | " << tabuleiro[2][2] << " |" << endl;
  cout << "  |---|---|---|" << endl;
}

bool posicao_valida(int linha, int coluna)
{
  // Crie uma logica para descobrir se a posicao nao eh valida
  // Quando a posicao nao for valida retorne false
  return true;
}

bool fim_de_jogo()
{
  // Fim de jogo ocorre quando todos os espacos não forem vazios
  return true;
}

bool houve_vencedor()
{
  // Crie uma logica para checar se houve vencedor
  // A função sempre retorna falso a nao ser que tenha vencedor
  return false;
}

void jogo_da_velha()
{
  // Crie uma logica para receber o valor de linha e coluna de um jogador
  // Lembre-se de testar a posicao fornecida
  encerrar_partida = fim_de_jogo() || houve_vencedor();
}

void mensagem_fim_de_jogo()
{
  cout << "Fim de Jogo - ";
  switch(vencedor)
  {
    case 'X':
      cout << "Jogador 1 venceu!" << endl;
      break;
    case 'O':
      cout << "Jogador 2 venceu!" << endl;
      break;
    case ' ':
      cout << "Houve um empate!" << endl;
      break;
  }
}

int main(void)
{
  inicializar_tabuleiro();

  cout << "-----------------------------" << endl;
  cout << "|     JOGO DA VELHA         |" << endl;
  cout << "-----------------------------" << endl;

  do
  {
    do
    {
      imprimir_tabuleiro();
      jogo_da_velha();
    } while(!encerrar_partida);
    mensagem_fim_de_jogo();

    cout << "-----------------------" << endl;
    cout << "|        MENU         |" << endl;
    cout << "-----------------------" << endl;
    cout << "| Digite S para sair  |" << endl;
    cout << "| Digite N para jogar |" << endl;

    do
    {
      cout << "Digite a sua opção: ";
      cin >> tecla;
    }while(tecla != 'S' && tecla != 'N' );

    // Crie uma logica para testar a tecla fornecida
    // Crie as devidas acoes para cada opcao
  } while(!encerrar_jogo);
}

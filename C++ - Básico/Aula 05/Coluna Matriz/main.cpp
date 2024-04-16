#include <iostream>
#define MAX 50


using namespace std;


void preencher(int matriz[][MAX], int count){
    
    cout << "Preenchendo a matriz: " << endl;

    for (int i = 0; i < count; i++) {
        for (int j = 0; j < count; j++) {

            cin >> matriz[i][j];

        }
    }    

}


int soma_coluna(int matriz[][MAX], int tamanho, int coluna){

    int resultado = 0;


    for (int i = 0; i < tamanho; i++) {
        resultado = resultado + matriz[i][coluna];
    }


    return resultado;
}


int main()
{
    int matriz[MAX][MAX];

    cout << "Digite o tamanho da matriz: " << endl;
    int tamanho = 0;
    cin>> tamanho;
    preencher(matriz, tamanho);


    int coluna = 0;
    cin >> coluna;


    int resultado =  0;
    resultado = soma_coluna(matriz, tamanho, coluna);


    cout << "O resultado e: "<< resultado << endl;


    return 0;
}

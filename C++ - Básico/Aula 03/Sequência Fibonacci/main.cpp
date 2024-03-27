#include <iostream>


using namespace std;


int main(){


    int quantidade = 0;
    int anterior = 0;
    int atual = 1;
    int auxiliar = 0;

    cout << "Digite um número:" << endl;

    cin >> quantidade;


    for (int i = 0; i < quantidade; i++)
    {


        cout << anterior;
        

        auxiliar = anterior;
        anterior = atual;
        atual = auxiliar + anterior;


        if(i < quantidade-1){
            cout << ",";
        }
        
        
    }


    return 0;
}

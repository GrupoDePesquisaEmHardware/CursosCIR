#include <iostream>


using namespace std;


int main(){
    
    int quantidade = 0;
    int anterior = 0;
    int atual = 1;
    int auxiliar = 0;
    
    cout << "Digite 1 para Sequencia Fibonacci" << endl;
    cout << "Digite 2 para Unidades de um numero" << endl;


    int opcao;
    cin >> opcao;
    
    switch (opcao){
        
        
        case 1:


        cout << "Sequencia Fibonacci" << endl;

        cout << "Digite um numero: " <<endl;

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
        
        
        break;
        
        case 2:


        int numero = 0;
        int resultado = 0;

        cout << "Unidades de um numero" << endl;
        
        cout << "Digite um numero:" << endl;
        
        cin >> numero;


        do{


            resultado = numero%10;
            numero = numero/10;
            cout << resultado << endl;


        }while(numero != 0);


        break;
     
    }


    return 0;
}

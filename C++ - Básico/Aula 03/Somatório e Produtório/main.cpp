#include <iostream>


using namespace std;


int main(){
    
    int num = 0;
    int soma = 0;
    
    int opcao = 0;


    cout << "Digite 1 para Somatorio" << endl;
    cout << "Digite 2 para Produtorio" << endl;


    cin >> opcao;


    switch(opcao){


        case 1:

            
            cout << "Somatorio" << endl;
            
            
            cout << "Digite um numero:" << endl;
            cin >> num;


            for (int i = 0; i <= num; i++) {


                soma = soma + i;


            }

            cout << "Resultado: ";
            cout << soma << endl;


        break;



        case 2:


            cout << "Produtorio" << endl;


            int produtorio = 1;


            cout << "Digite um numero:" << endl;
            cin >> num;


            for (int i = 1; i <= num; i++) {


                produtorio *= i;


            }

            cout << "Resultado: ";
            cout << produtorio << endl;


        break;


    }
    


    return 0;


}

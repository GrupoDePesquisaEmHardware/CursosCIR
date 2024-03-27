#include <iostream>


using namespace std;


int main(){
   
    int numero = 0;
    int resultado = 0;


    cout << "Digite um número: " << endl;


    cin >> numero;

   
    do{

        resultado = numero%10;
      
        numero = numero/10;
      
        cout << resultado << endl;
    
    }while(numero != 0);


    return 0;
}

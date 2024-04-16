#include <iostream>
#define MAX 50


using namespace std;


void preencher(float &a, float &b){
    cout << "Digite o primeiro numero: " << endl;
    cin >> a;
    
    cout << "Digite o segundo numero: " << endl;
    cin >> b;
}


int soma(int a, int b){
    int numero = a + b;
    return numero;
}

float divisao(float a, float b){
    if(b == 0 ){
        return 0;
    }

    float resul = a/b;
    return resul;
}


int subtracao(int a, int b){
    return a - b;
}


int multiplicacao(int a, int b){
    return a * b;
}


int main()
{


    float x = 0;
    float y = 0;
    int resultado = 0;
    float resultado_float = 0;
    int opcao = 0;


    cout << "==================>";
    cout << "CALCULADORA SIMPLES";
    cout << "<==================" << endl;
    cout << "1 - Soma" << endl;
    cout << "2 - Subtracao" << endl;
    cout << "3 - Multiplicacao" << endl;
    cout << "4 - Divisao" << endl;


    cin>> opcao;


    if(opcao > 4 || opcao < 1){
        return 0;
    }
    

    switch (opcao){


    case 1:

    preencher(x, y);
    
    resultado = soma(x,y);
    
    cout << "O resultado: " << resultado << endl;
    
    break;



    case 2:
    
    preencher(x, y);
    
    resultado = subtracao(x,y);
    
    cout << "O resultado: " << resultado << endl;
    
    break;


    case 3:
    
    preencher(x, y);
    
    resultado = multiplicacao(x,y);
    
    cout << "O resultado: " << resultado << endl;
    
    break;


    case 4:
    
    preencher(x, y);
    
    resultado_float = divisao(x,y);
    
    cout << "O resultado: " << resultado_float << endl;
    
    break;
       
        
    }
    
    return 0;
}

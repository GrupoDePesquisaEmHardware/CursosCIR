#include <iostream>


#define MAX 50


using namespace std;


int main(){


    int tamanho = 0;
    cin >> tamanho;


    char palavra[MAX];


    for (int i = 0; i < tamanho; i++)
    {


        cin >> palavra[i];
    
    
    }
   
   for (int i = 0; i < tamanho; i++)
   {


    cout << palavra[i];


   }



    return 0;
}

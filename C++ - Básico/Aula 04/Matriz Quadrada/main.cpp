#include <iostream>


#define MAX 50


using namespace std;


int main(){
  
    int tamanho = 0;
    cin >> tamanho;


     int numeros[tamanho][tamanho];


    for (int i = 0; i < tamanho; i++) 
    {


        for (int j = 0; j < tamanho; j++)
    

        {
            cin >> numeros[i][j];
        
        }
    

    }
    


    for (int i = 0; i < tamanho; i++)
    {
        
            
        for (int j = 0; j < tamanho; j++)
        {
        
        
            cout << numeros[i][j] << " ";

  
        }
  
  
        cout << endl;
  

    }
  

    return 0;
}

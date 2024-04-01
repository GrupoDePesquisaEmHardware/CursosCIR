#include <iostream>


#define MAX 5


using namespace std;


int main(){


    int numeros[MAX];
    
    
    for (int i = 0; i < MAX; i++)
    {


        cin>> numeros[i];


    }
    
    for (int i = 0; i < MAX; i++)
    {
    

        cout << numeros[i]<< " ";


    }
    
    
    return 0;
}

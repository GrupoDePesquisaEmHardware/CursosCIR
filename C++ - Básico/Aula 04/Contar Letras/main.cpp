#include <iostream>
#define MAX 50
using namespace std;


int main(){


    char palavra[MAX];
    

    for (int i = 0; i < 4; i++) 
    {


    cin >> palavra[i];

    
    }
   

   int letra = 0;


   for (int i = 0; i < 4; i++) {
       if(palavra[i] == 'A' || palavra[i] == 'a')
       {


        letra++;


        }


   }


   cout << "A quantidade da letra 'A' na palavra e: "<< letra <<endl;


    return 0;
}

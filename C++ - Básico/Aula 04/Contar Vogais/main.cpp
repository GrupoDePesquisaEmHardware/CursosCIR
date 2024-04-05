#include <iostream>
#define MAX 10
using namespace std;


int main(){
  
   char palavra[MAX];
   
   for (int i = 0; i < 4; i++) {
       cin >> palavra[i];
   }
   
   int letra = 0;
   for (int i = 0; i < 4; i++) {

       if(palavra[i] == 'A' || palavra[i] == 'a'|| palavra[i] == 'E' || palavra[i] == 'e' || 
       palavra[i] == 'I' || palavra[i] == 'i' || palavra[i] == 'O' || palavra[i] == 'o'||
       palavra[i] == 'U' || palavra[i] == 'u'){
           
       letra++;


       }


   }


   cout << "A quantidade de vogais e: " << letra <<endl;


    return 0;
}

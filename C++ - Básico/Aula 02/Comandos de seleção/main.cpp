#include <iostream>


using namespace std;


int main(){


    int x = 2;
    int y = 5;


    if(x > y){

        cout << "Sim" << endl;

    }else{

        cout << "Nao" << endl;

    }


    if(x == y){

        cout << "Sao iguais" << endl;

    }else if(x >= y){
    
        cout << "Sim" << endl;

    }else if(x != y){
    
        cout << "Sao diferentes" << endl;
    
    }


    return 0;
}

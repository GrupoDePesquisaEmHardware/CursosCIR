#include <iostream>


using namespace std;


int main(){
   
    int x = 2;
    int y = 5;
    int z = 10;


    if(x > y && x > z){
    
        cout << "X e o maior numero";
    
    }else if (y > x && y > z){
    
        cout << "Y e o maior numero";
    
    }else if(z > x && z > y){
    
        cout << "Z e o maior numero";
    
    }


    return 0;
}

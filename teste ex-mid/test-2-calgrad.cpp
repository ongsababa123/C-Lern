#include <iostream>

using namespace std;

int main(){
    int x;
    do{
    
    cout << "enter score :"; cin >> x;
    if( x >= 80){
        cout << "Grad A ";
    }
    else if( x >= 70){
        cout << "Grad B ";
    
    }
    else if( x >= 60){
        cout << "Grad C ";
    
    }
    else if( x >= 50){
        cout << "Grad D ";
    
    }
    else if( x >= 0){
        cout << "Grad F ";
    
    }
    else if( x <= 0){
        cout << "Enter Grad Agin " << endl;
    
    }
    }while (x <= 0);
    
    return 0;
}
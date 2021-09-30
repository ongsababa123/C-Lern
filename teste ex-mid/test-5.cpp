#include <iostream>

using namespace std;

int main(){
    int age;
    do {
    cout << " enter age : "; cin>>age;
    if (age >=56){
        cout << "oldage" <<endl;
    }
     else if (age >=36){
        cout << "middle age" <<endl;
    }
     else if (age >=21){
        cout << "adult age" <<endl;
    }
     else if (age >=11){
        cout << "Teenage" <<endl;
    }
     else if (age >=0){
        cout << "Children" <<endl;
    } 
     else if(age < 0){
        cout << "enter age agin" << endl;
    }
        }while (age < 0); 
    
    return 0;
}
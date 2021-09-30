#include<iostream>
using namespace std;

int main(){

    int can,number,fish,tomato,remainingfish,remainingtomato;

    cout<<"Enter tomato : "; cin>> tomato;

    fish = (600/3);  // sardines
    can = (200/tomato);       // tomato

    cout<< "Tomato = " << can <<" Canned " <<endl;
    cout<< "Fish = " << fish << " Canned " <<endl;

    if (tomato >=3 ){
        remainingfish = (fish - can)/3;
    }

    if (remainingtomato = 0 ){
        remainingtomato = (can/tomato);
    }
    cout << "remaining fish = " << remainingfish <<endl;
    cout << "remaining tomato = " << remainingtomato <<endl;
    cout << "Number of Canned Fish = "<< can <<" Canned"<<endl;
    


    return 0;
}
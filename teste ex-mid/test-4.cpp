#include <iostream>

using namespace std;

int main(){
    int x,y;
    cout << "Enter number X ";  cin>> x;
    cout << "Enter number Y ";  cin>> y;
    if (x > y){
        cout << "maximum is " << x <<endl;
    }
    if (x < y){
        cout << "maximum is " << y <<endl;
    }

    
    return 0;
}
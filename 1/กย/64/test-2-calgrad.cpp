#include <iostream>

using namespace std;

int main(){
    int x;
    int stu;

    cout << "Enter Student amount    : ";
    cin >> stu;
    for (int i = 0; i < stu; i++){
    do{
    
    cout << "enter score student "<< i + 1 << ": "; 
    cin >> x;
    if( x >= 80){
        cout << "Student Grad A " << endl;
    }
    else if( x >= 70){
        cout << "Student Grad B " << endl;
    
    }
    else if( x >= 60){
        cout << "Student Grad C " << endl;
    
    }
    else if( x >= 50){
        cout << "Student Grad D " << endl;
    
    }
    else if( x >= 0){
        cout << "Student Grad F " << endl;
    
    }
    else if( x < 0){
        cout << "Enter score Agin " << endl;
    
    }
    }while (x < 0);

    }
    

    return 0;
}
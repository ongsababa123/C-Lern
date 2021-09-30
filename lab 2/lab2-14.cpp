//Home work 6 หาพื้นที่และเส้นรอบวง
#include<iostream>

using namespace std;
int main()
{
    float pi = 3.1415;
    float Area;
    float round;
    
    cout << "Program Calculate Area Circle."<< endl;
    cout << "Circle radius (real number) ? "; 
    cin >> Area;
    cout <<endl;
  
    cout << "Area of circle with radius "<<Area<<" is " <<pi*Area*Area<< endl;
    cout <<"Circumference is "<<2*pi*Area;

    return(0);
}
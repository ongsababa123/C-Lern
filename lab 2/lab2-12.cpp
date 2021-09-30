//Home work 2 
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    float a, b, c;
    cout << "Ax^2  Bx + C = 0"<< endl;
   
    cout << "Enter number A : "; 
    cin >> a;
    cout << "Enter number B : ";
    cin >> b;
    cout << "Enter number C : ";
    cin >> c;
  
    cout << "Answer of "<< a << "x^2 "<< b << "X" << " + " << c <<" = 0" << endl;
    cout << "Answer 1 = "<< ((-b) + sqrt ((b*b)-(4*a*c))) / (2*a) << endl;
    cout << "Answer 2 = "<< ((-b) - sqrt ((b*b)-(4*a*c))) / (2*a) << endl;


    return(0);
}
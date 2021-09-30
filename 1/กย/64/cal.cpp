#include<iostream>
#include<cmath>
using namespace std;

#define PI 3.14159265359

int main(){
	float rad;
	int ch;
	float circumference,area,volume;
	cout << "Enter radious : ";cin >> rad;
	cout << "1.)Calculate the circumference of circle" << endl;
	cout << "2.)Calculate the Area of circle" << endl;
	cout << "3.)Calculate the volume of phere" << endl;	
	cout << "Enter the choice : "; cin >> ch;
	if(ch == 1){
		circumference = 2*PI*rad;
		cout << "Circumference of circle is " << circumference ;
	}
    else if(ch == 2){
		area = PI*pow(rad,2);
		cout << "Area of circle is " << area;
	}
    else if(ch == 3){
		volume = (4.0/3.0) * PI * pow(rad,3);
		cout << "volume of phere is " << volume;
	}
    else{
		cout << " Enter Again";
	}
}
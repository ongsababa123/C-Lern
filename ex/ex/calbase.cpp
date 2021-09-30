#include<iostream>
using namespace std;

int main(){
	int x;
	int width,length,Rectsngle_Area;
	int base,height,Triangle_Area;
	cout << "Select 1.(Rectangle) or 2.(Triangle) : ";cin >> x;
	if(x == 1){
		cout << "Enter width, length = ";cin >> width >> length;
		Rectsngle_Area = width*length;
		cout << "Rectsngle Area = " << Rectsngle_Area;
	}else if(x == 2){
		cout << "Enter base, height  = ";cin >> base >> height;
		Triangle_Area = 0.5*base*height;
		cout << "Triangle Area = " << Triangle_Area;
	}else {
		cout << "Error";
	}
}

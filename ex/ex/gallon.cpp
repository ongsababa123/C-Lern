#include<iostream>
using namespace std;

#define GALLON 4.5461
#define KILO 1.6093

int main(){
	float pettroleum,miles,litperkilo;
	float fuelG;
	float liter;
	float kilomater,perKilo;
	cout << "Input Pettroleum used : ";cin >> pettroleum;
	cout << "Input miles used : ";cin >> miles;
	fuelG = miles/pettroleum;
	cout << "(1) Fuel economy : " << fuelG <<  " per gallon" << endl;
	kilomater = miles*KILO;
	liter = pettroleum*GALLON;
	litperkilo = liter/kilomater;
	cout << "(2) The car will use " << litperkilo << " liter per kilomater"<< endl;
	perKilo = kilomater/liter;
	cout << "(3) Fuel economy : " << perKilo <<  " kilo per litter" << endl;
	/*cout << kilomater << endl;
	cout << liter;*/
}

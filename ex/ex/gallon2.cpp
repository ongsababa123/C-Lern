#include<iostream>
using namespace std;

#define gallon 3.78541178
#define kilo 1.6093

int main(){
	int pettroleum,miles;
	int fuelG;
	int liter;
	int kilomater,perKilo;
	cout << "Input Pettroleum used : ";cin >> pettroleum;
	cout << "Input miles used : ";cin >> miles;
	fuelG = miles/pettroleum;
	cout << "(1) Fuel economy : " << fuelG <<  " per gallon" << endl;
	kilomater = miles*kilo;
	liter = (pettroleum*gallon)/kilomater;
	cout << "(2) The car will use " << liter << " per kilomater"<< endl;
	perKilo = kilomater/liter;
	cout << "(3) Fuel economy : " << perKilo <<  " per litter" << endl;
}

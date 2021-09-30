#include <iostream>
using namespace std;

int main(){
	int number;
	cout << "Enter your number : ";
	cin >> number;
	cout << number/1000 << "\t";
	cout << number%1000/100 << "\t";
	cout << number%100/10 << "\t";
	cout << number%10 << "\t";	
}
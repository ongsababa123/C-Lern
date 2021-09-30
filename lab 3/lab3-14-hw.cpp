#include <iostream>
using namespace std;

int main(){
	int degit1,degit2,degit3,degit4,digit_all;
	int decimal;
	cout << "Enter your binary :";
	cin >> digit_all;
	degit1 = (digit_all/1000)*8;
	degit2 = (digit_all%1000/100)*4;
	degit3 = (digit_all%100/10)*2;
	degit4 = (digit_all%10)*1;
	decimal = degit1 + degit2 + degit3 + degit4;
	cout << decimal;
	
}
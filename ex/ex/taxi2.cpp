#include<iostream>
using namespace std;

int main(){
	int kilo;
	int bill = 40;
	int getValue;
	cout << "Enter your kilo : "; cin >> kilo;
	if(kilo >= 0 && kilo <= 1){
		getValue = 0;
	}if(kilo >= 2 && kilo <= 10){
		getValue = 5;
	}
	if(kilo >= 11 && kilo <= 15){
		getValue = 4;
	}	
	if(kilo >= 16 && kilo <= 20){
		getValue = 3;
	}else{
		getValue = 2;
	}
	for(int i = 2;i <=kilo;i++){
		bill += getValue;
	}
	cout << "Cost is " << bill << " Bath";
}

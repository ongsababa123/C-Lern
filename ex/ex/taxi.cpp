#include<iostream>
using namespace std;

int main(){
	int kilo,x_kilo;
	int bill;
	cout << "Enter your kilo : "; cin >> kilo;
	if(kilo > 0){
		bill += 40;
	}
	if(kilo >= 2){
		if(kilo >= 10){
			bill += 8*5;
		}else{
			for(int i=1;i <= kilo;i++){
				bill += i*5;
			}
		}
	}
	if(kilo >= 11){
		if(kilo >= 15){
			bill += 4*4;
		}else{
			for(int j = 11;j <= kilo;j++){
				bill += j*4;
			}
		}
	}
	cout << bill;
}

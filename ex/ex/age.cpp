#include<iostream>
using namespace std;

int main(){
	int age;
	cout << "Enter your Age : "; cin >> age;
	if(age >=0 && age <=10){
		cout << "Children";
	}else if(age >=11 && age <=20){
		cout << "Teenage";
	}else if(age >=21 && age <=35){
		cout << "Adult";
	}else if(age >=36 && age <=55){
		cout << "Middle age";
	}else{
		cout << "old age";
	}
}

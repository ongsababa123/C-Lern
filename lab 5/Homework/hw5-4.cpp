#include<iostream>
using namespace std;

float calInterest(float money,float year,float inTer){
	if(year > 0){
		return calInterest(money,year-1,inTer)+(calInterest(money,year-1,inTer)*inTer);
	}else{
		return money;
	}
}

int main(){
	float money=0,year=0,interest=0;
	float inTer=0;
	cout << "Enter money : ";cin >> money;
	cout << "Enter year : ";cin >> year;
	cout << "Enter interest rate : ";cin >> interest;
	inTer = interest/100;
	
	cout <<"Total is " << calInterest(money,year,inTer);
}


#include<iostream>
using namespace std;

int main(){
	int n,m;
	int max;
	int gcd=1,lcm=1;
	cout << "Enter Two number : ";cin >> n >> m;

	for(int i = 1;i<=1000;i++){
		if((n % i == 0)&&(m % i == 0)){
			gcd = i;
		}
	}
	lcm = (n*m)/gcd;
	
	cout << "gcd is " << gcd << "\n";
	cout << "lcm is " << lcm << "\n";
}

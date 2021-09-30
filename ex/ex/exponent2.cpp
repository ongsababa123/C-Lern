#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x,N,i=1;
	int old_x;
	cout << "N = ";cin >> N;
	cout << "n        2^n" << endl;
	while(i <= N){
		x = pow(2,i);
		cout << i << "        " << x << endl;
		i++;
	}
}

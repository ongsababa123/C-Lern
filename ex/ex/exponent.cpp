#include<iostream>
#include<cmath>
using namespace std;

int main(){
	int x,N,i=1;
	int old_x;
	cout << "N = ";cin >> N;
	cout << "X        x^2" << endl;
	while(i <= N){
		x = pow(i,2);
		cout << i << "        " << x << endl;
		i++;
	}
}

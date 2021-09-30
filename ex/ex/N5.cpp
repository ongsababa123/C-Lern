#include<iostream>
using namespace std;

int main(){
	int n;
	int num;
	int c=1;
	cout << "Enter N : ";cin >> n;
	num = n;
	for(int i = 1;i<=n;i++){
		num += n-i;
	}
	cout << "Sum of N is : " << num;
}

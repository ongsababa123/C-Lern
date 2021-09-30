#include<iostream>
using namespace std;

int main(){
	int num,n;
	cout << "Enter N : ";cin >> n;
	/*for(int i = 10;i <= n;i += 5){
		num += i;
	}*/
	int i = 10;
	/*while(i <= n){
		num += i;
		i += 5;
	}*/
	do{
		num += i;
		i += 5;		
	}while(i <= n);

	cout << "Sum of N is : " << num;

}

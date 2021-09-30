#include<iostream>
using namespace std;

int main(){
	int i=0;
	int num=0,n;
	cout << "Enter N : "; cin >> n;
	/*for(i = 1;i <= n;i++){
		num += i;
	}
	cout << "Sum of N is : " << num;*/
	/*while(i <= n){
		num += i;
		i++;
	}
	cout << "Sum of N is : " << num;*/
	do{
		num += i;
		i++;
	}while(i <= n);
	cout << "Sum of N is : " << num;
}

#include<iostream>
using namespace std;

int main(){
	bool flag = true;
	int score;
	while(flag == true){
		cout << "Enter study score : ";cin >> score;
		if(score >=80 && score <=100){
			cout << "Grade : G\n";
		}else if(score >=50 && score <80){
			cout << "Grade : P\n";
		}else{
			cout << "Grade : F\n";
		}
	}
}

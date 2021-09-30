#include<iostream>
using namespace std;

int main(){
	int std = 20;
	int classroom[20],homework[20],test[20],mid[20],final[20],total[20];
	for(int i = 0;i <= 19;i++){
		cout << "Enter classroom : ";cin >>  classroom[i];

		cout << "Enter homework : ";cin >>  homework[i];

		cout << "Enter test : ";cin >>  test[i];

		cout << "Enter mid turm : ";cin >>  mid[i];	

		cout << "Enter final turm : ";cin >>  final[i];

		total[i] = 	classroom[i] + homework[i] + test[i] + mid[i] + final[i];
		
		cout << "Total : " << total[i] << endl;
		if(total[i] >= 80){
			cout << "Grade : A " << endl;
		}else if(total[i] >= 70){
			cout << "Grade : B " << endl;
		}else if(total[i] >= 60){
			cout << "Grade : C " << endl;
		}else if(total[i] >= 50){
			cout << "Grade : D " << endl;
		}else{
			cout << "Grade : F " << endl;
		}
		cout << "**************************" << endl;
	}
}
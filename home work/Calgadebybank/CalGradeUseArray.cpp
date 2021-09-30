#include<iostream>

using namespace std;

int main(){
	int std = 0;
	int classroom[std],homework[std],test[std],midterm[std],final[std],total[std];

	cout << " Enter Number Student : " ; cin>>std;
	cout <<endl;

	for (int i = 1; i <= std; i++)
	{
		cout << " Student number " << i <<endl;
		cout << " Enter Score Classroom : "; cin>>classroom[i];
		cout << " Enter Score Homework : "; cin>>homework[i];
		cout << " Enter Score Test : "; cin>>test[i];
		cout << " Enter Score Midterm : "; cin>>midterm[i];
		cout << " Enter Score Final : "; cin>>final[i];

		total[i] = classroom[i]+homework[i]+test[i]+midterm[i]+final[i];

		cout<<endl;
		cout << "**************************" << endl;
		cout << " Student number : "<< i <<endl;
		cout << " Score Total = " <<total[i]<<endl;

		if(total[i] >= 80){
			cout << "Grade : A " << endl;
		}else if(total[i] >= 70){
			cout << " Grade : B " << endl;
		}else if(total[i] >= 60){
			cout << " Grade : C " << endl;
		}else if(total[i] >= 50){
			cout << " Grade : D " << endl;
		}else{
			cout << " Grade : F " << endl;
		}
		cout<<endl;
		cout << "**************************" << endl;
		cout<<endl;
	}
	return (0);
}
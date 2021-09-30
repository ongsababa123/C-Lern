#include<iostream>
using namespace std;

int main()
{
	int student=10,i=1;
	while(i <= student){
		int score;
		cout<< "Enter You Point:  ";
		cin >> score;
		if(score>=80){
			cout << "Student " << i << " : Grade A" << endl;
		}
		else if(score>=70) {
			cout << "Student " << i << " : Grade B" << endl;
		}
		else if(score>=60) {
			cout << "Student " << i << " : Grade C" << endl;
		}
		else if(score>=50) {
			cout << "Student " << i << " : Grade D" << endl;
		}
		else{
			cout << "Student " << i << " : Grade F" << endl;
		}
		i++;
	}
	/*int score;
	cout<< "Enter You Point:  ";
	cin >> score;
	if(score>=80){
		cout << "Grade A";
	}
	else if(score>=70) {
		cout << "Grade B";
	}
	else if(score>=60) {
		cout << "Grade C";
	}
	else if(score>=50) {
		cout << "Grade D";
	}
	else{
		cout << "Grade F";
	}
	return 0;*/			
}

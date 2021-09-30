#include<iostream>
#include <string.h>
using namespace std;

void inputgrade(int &classroom , int &homework , int &test, int &midterm , int &final);
int sumtotal(int classroom,int homework , int test,int midterm,int final);
string CalScore(int total);
void outputscore(int &total,string &Grade);

int main(){
	int std;
	int classroom[std], homework[std], test[std], midterm[std], final[std], total[std];
	string Grade[std];
	cout << " Enter Number Student : " ; cin>>std;
	cout <<endl;

	for (int i = 1; i <= std; i++)
	{
		cout << " Student number " << i <<endl;
		inputgrade(classroom[i],homework[i],test[i],midterm[i],final[i]);
		total[i] = sumtotal(classroom[i],homework[i],test[i],midterm[i],final[i]);
		Grade[i] = CalScore(total[i]);
		outputscore(total[i],Grade[i]);
	}
	return(0);
}

void inputgrade(int &classroom , int &homework , int &test, int &midterm , int &final){
		cout << " Enter Score Classroom : "; cin>>classroom;
		cout << " Enter Score Homework : "; cin>>homework;
		cout << " Enter Score Test : "; cin>>test;
		cout << " Enter Score Midterm : "; cin>>midterm;
		cout << " Enter Score Final : "; cin>>final;
}

int sumtotal(int classroom,int homework , int test,int midterm,int final){
		int total = classroom + homework + test + midterm + final;
		return(total);
}

string CalScore(int total){
    string Grade;
    if(total >= 80){
        Grade = "A"; 
    }else if (total >= 70){
        Grade = "B"; 
    }else if (total >= 60){
        Grade = "C"; 
    }else if (total >= 50){
        Grade = "D"; 
    }else  Grade = "F"; 
    return(Grade);
}
void outputscore(int &total,string &Grade){
    cout <<"Total : " << total << endl;
	cout <<"Grade : " << Grade <<endl;
	cout << "**************************" << endl;
}

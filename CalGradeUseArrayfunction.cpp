#include <iostream>
#include <string.h>
using namespace std;
void CalGrade(int &classroom , int &homework , int &test, int &midterm , int &final);
int CalTotal(int classroom,int homework , int test,int midterm,int final);
string CalScore(int total);
void PrintScore(int &total,string &Grade);
int main(){
    int std = 20;
    int classroom[20] , homework[20] , test[20] , midterm[20] , final[20];
    int total[20];
    string Grade[20];
    for ( int i = 0; i < std; i++)
    {
        CalGrade(classroom[i],homework[i],test[i],midterm[i],final[i]);
        total[i] = CalTotal(classroom[i],homework[i],test[i],midterm[i],final[i]);
        Grade[i] = CalScore(total[i]);
		PrintScore(total[i],Grade[i]);
		
    }

    return(0);
}
void CalGrade(int &classroom , int &homework , int &test, int &midterm , int &final){
        cout << "Enter Score Classroom = ";
        cin >> classroom;
        cout << "Enter Score Homework = ";
        cin >> homework;
        cout << "Enter Score Test = ";
        cin >> test;
        cout << "Enter Score Midterm = ";
        cin >> midterm;
        cout << "Enter Score Final = ";
        cin >> final;
}

int CalTotal(int classroom,int homework , int test,int midterm,int final){
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

void PrintScore(int &total,string &Grade){
    cout <<"Total : " << total << endl;
	cout <<"Grade : " << Grade <<endl;
	cout << "**************************" << endl;
}
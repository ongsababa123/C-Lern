#include<iostream>
#include <string.h>
using namespace std;

void inputgrade(int &classroom , int &homework , int &test, int &midterm , int &final);

template<class sumtotal>
sumtotal totalscore(sumtotal classroom, sumtotal homework, sumtotal test, sumtotal midterm, sumtotal final);

template<class outputGrad1>
string grade1(int total);

int main(){
	int std;
	int classroom[std], homework[std], test[std], midterm[std], final[std], total[std];
	string Grade[std];
	cout << " Enter Number Student : " ; cin>>std;
	cout <<endl;

	for (int i = 1; i <= std; i++)
	{
		cout <<endl;
		cout <<" **************************** "<<endl;
		cout << " Student number " << i <<endl;
		inputgrade(classroom[i],homework[i],test[i],midterm[i],final[i]);
		cout <<" Total Score "<< totalscore<int>(classroom[i],homework[i],test[i],midterm[i],final[i]);cout <<endl;
		cout <<" Grade type [1] "<< grade1<string>(total[i]);
		cout <<endl;
		cout <<" **************************** "<<endl;
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

template<class sumtotal>
sumtotal totalscore(sumtotal classroom, sumtotal homework, sumtotal test, sumtotal midterm, sumtotal final){
	sumtotal total;
	total = classroom + homework + test + midterm + final;
	return(total);
}

template<class outputGrad1>
string grade1(int total){
	string Grade;
	if(total >= 80){
        Grade = "A"; 
    }else if (total >= 75){
        Grade = "B+"; 
    }else if (total >= 70){
        Grade = "B"; 
    }else if (total >= 65){
        Grade = "C+"; 
    }else if (total >= 60){
        Grade = "C"; 
    }else if (total >= 55){
        Grade = "D+"; 
    }else if (total >= 50){
        Grade = "D"; 
    }else  Grade = "F"; 
    return(Grade);
}
/*string CalScore(int total){
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
*/
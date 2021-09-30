#include<iostream>
#include<iomanip>
#include<cstring>

using namespace std;

void input(string name[], int score[], int &size){
	int i=0,classroom,home,mid,term,test,final,total;
	string n;
	char check;
	
	do{
		cout<<"No. ------   "<<i+1<<endl;
		cout<<"Input Name: "   ;cin>>n;
		cout<<"Input score classroom : " ;cin>>classroom;
		cout<<"Input score Homework  : " ;cin>>home;
		cout<<"Input score test      : " ;cin>>test;
		cout<<"Input score Midterm   : " ;cin>>mid;
		cout<<"Input score final     : " ;cin>>final;
		total = classroom + home + test + mid + final;
		name[i] = n;
		score[i] = total;
		i++;
		cout<<"Again ? : "; cin>>check;	
	}while(check == 'y' || check == 'Y');
	
	size = i;
}


void calgrade(int score[],char grade[],const int size){
	

	for(int i=0; i<size; i++){
		if(score[i]>=80){
			grade[i]='A';
		}
		if(score[i]>=70 && score[i] < 80){
			grade[i]='B';
		}
		if(score[i]>=60 && score[i] < 70){
			grade[i]='C';
		}
		if(score[i]>=50 && score[i] < 60){
			grade[i]='D';
		}
		if(score[i] < 50 ){
			grade[i]='F';
		}
	}
}



void show(string name[],int score[],char grade[],const int size){
	
	system("cls");
	cout<<" ---------------------- "<<endl;
	cout<<setw(3)<<"No. "<<setw(10)<<"Name";
	cout<<setw(10)<<"Score"<<endl;
	cout<<" ---------------------- "<<endl;
		
	for(int i=0; i<size; i++){
		cout<<setw(2)<<i+1<<setw(5)<<name[i];
		//%d = int ,, %f = float
		cout<<setw(8)<<score[i];
		cout<<setw(8)<<grade[i]<<endl;
	}
}


int main(){
	
	string name[1000];
	int score[1000];
	char grade[1000];
	int i=0,size;
	char check;
	
	
	input(name,score,size);
	calgrade(score,grade,size);
	show(name,score,grade,size);
	return 0;
}
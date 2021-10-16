#include <iostream>  
#include<string> 
#include <iomanip>

//color
#include <windows.h>  
#include <stdio.h>
#define textcolor(txt,back) SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), back*16+txt)
#define resetcolor() SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15)

#include <sstream>

using namespace std; 

int menu=5,col,row,seat[10][9][18]={{{0}}},movie,total;
string al[16],crow;
string theatre[][4]={{"Vanguard","Action","120","9.00"},
{"The Last Full Measure","Comedy","150","12.30"},
{"Greenland","Drama","96","15.50"},
{"Songkran-Saep-Sataan-Logun","Entertainment","80","17.20"},
{"Tesla","Horror","102","18.30"}};
int price[]={90,100,120,90,100};

time_t now = time(0);
tm *ltm = localtime(&now);
int day=ltm->tm_mday,month=1 + ltm->tm_mon,year=1900 + ltm->tm_year;

void main();
void movieList(){
	for(int i=0;i<sizeof(theatre)/sizeof(theatre[0]);i++){
		cout<<"\tTheatre "<<i+1<<"   "<<theatre[i][0]<<""<<endl;
		cout<<"\t\t    "<<theatre[i][1]<<" : "<<theatre[i][2]<<" mins"<<endl;
		cout<<"\t\t    "<<theatre[i][3]<<" : Price "<<price[i]<<endl;
	}
	cout<<endl;
	if(menu==1){
		cout<<"\n\tPlease Enter to main menu"<<endl;
		cout<<"\t";
		system("pause");
		system("cls");
		menu=0;
		main();
	}
}
void allSeats(){
	for(int i=1,ch='I'; ch>='A'; ch--){
		al[i]=ch;
		i++;
	}
	cout<<"\tTheatre "<<movie<<"   "<<theatre[movie-1][0]<<""<<endl;
	cout<<"\t\t    "<<theatre[movie-1][1]<<" : "<<theatre[movie-1][2]<<" mins"<<endl;
	cout<<"\t\t    "<<theatre[movie-1][3]<<" : Price "<<price[movie-1]<<endl;
	
	textcolor(15,1);
	cout<<"\t"<<setw(55)<<setfill(' ')<<""<<endl<<"\t ";
	textcolor(15,9);
	cout<<setw(33)<<setfill(' ')<<"Cinema Screen"<<setw(20)<<setfill(' ')<<"";
	textcolor(15,1);
	cout<<" "<<endl<<"\t"<<setw(55)<<" "<<endl;
	resetcolor();
	textcolor(15,1);
	cout<<"\t   ";
	for(int i=1;i<=18;i++){
		if(i>8){
			textcolor(15,1);
			cout<<i;
			if(i>17){
				resetcolor();
				cout<<" ";
			}else{
				cout<<" ";
				resetcolor();
			}
		}
		else{
			textcolor(15,1);
			cout<<i;cout<<"  ";
			resetcolor();
		}
	}
	textcolor(0,0);
	cout<<"|";
	resetcolor();
	cout<<endl;
	for(int i=1;i<=9;i++){
		if(i==1 || i==2){
			textcolor(15,5);
			cout<<"\t"<<al[i]<<" ";
			resetcolor();
			cout<<" ";
		}else{
			textcolor(15,1);
			cout<<"\t"<<al[i]<<" ";
			resetcolor();
			cout<<" ";
		}
		
		for(int j=1;j<=18;j++){
			if(seat[movie-1][i][j]==1){
				textcolor(15,12);
				cout<<seat[movie-1][i][j]<<" ";
				resetcolor();
				cout<<" ";
			}
			else{
			
				cout<<seat[movie-1][i][j]<<"  ";
			}
		}
		cout<<endl;
	}
	cout<<"\n\t*SEAT PRICE ROW ";
	textcolor(15,5);
	cout<<"I-H";
	resetcolor();
	cout<<" +100"<<endl;
	if(menu==2){
		cout<<"\n\tPlease Enter to main menu"<<endl;
		cout<<"\t";
		system("pause");
		system("cls");
		menu=0;
		main();
	}
}
void showTicket(){
	cout<<"\t"<<setw(50)<<setfill('=')<<""<<setfill(' ')<<endl;
	cout<<"\t|      |"<<day<<"/"<<month<<"/"<<year<<endl;
	cout<<"\t|      |"<<"MOVIE TITLE : "<<theatre[movie-1][0]<<endl;
	cout<<"\t|      |"<<"SHOWTIME : "<<theatre[movie-1][3]<<endl;
	cout<<"\t|      |"<<"THEATRE : "<<movie<<" | SEAT No. : "<<crow<<col<<endl;
	cout<<"\t"<<setw(50)<<setfill('=')<<""<<setfill(' ')<<endl;	
	cout<<"\n\tPlease Enter to main menu"<<endl;
}
void main(){
	bool con=true;
	do{
		system("cls");
		cout<<"\t"<<day<<"/"<<month<<"/"<<year;
		cout<<"\n\t";
		textcolor(1,1);
		cout<<"************************************************************"<<endl;
		resetcolor();
		textcolor(0,0);
		resetcolor();
		
		cout<<"\t";
		textcolor(1,1);
		cout<<"*";
		resetcolor();
		textcolor(9,9);
		cout<<"\                                                          ";
		textcolor(1,1);
		cout<<"*"<<endl;
		resetcolor();

		cout<<"\t";
		textcolor(1,1);
		cout<<"*";
		resetcolor();
		textcolor(15,9);
		cout<<"             Movie Reservation Ticket Program             ";
		resetcolor();
		textcolor(1,1);
		cout<<"*"<<endl;
		resetcolor();
		cout<<"\t";
		textcolor(1,1);
		cout<<"*";
		resetcolor();
		textcolor(9,9);
		cout<<"\                                                          ";
		textcolor(1,1);
		cout<<"*"<<endl;
		resetcolor();
		cout<<"\t";
		textcolor(1,1);
		cout<<"************************************************************"<<endl;
		resetcolor();
		cout<<"\n\t";
		textcolor(15,1);
		cout<<setw(35)<<setfill(' ')<<"MAIN MENU"<<setw(25)<<""<<endl<<endl;
		resetcolor();
		cout<<"\t1. Show movie list\n\t2. Show seat\n\t3. Book Ticket\n\t0. Exit"<<endl<<endl;
		cout<<"\t";
		textcolor(1,1);
		cout<<setw(61)<<setfill('=')<<"="<<endl;
		resetcolor();
		
		cout<<"\tEnter Menu 0-3 : ";
		while (!(cin >> menu))
		{
			cout<<"\tPlease Enter Number: ";
			cin.clear();
			cin.ignore(123, '\n');
		}
		if(menu==0 || menu==1 || menu==2 || menu==3)con=false;
	}while(con);

	if(menu==3){
		system("cls");
		movieList();
		char conf;
		con =true;
		do{
			cout<<"\tEnter Theatre 1-5 : ";
			while (!(cin >> movie))
			{
				cout<<"\tPlease Enter Number : ";
				cin.clear();
				cin.ignore(123, '\n');
			}
			
			for(int i=1;i<=sizeof(theatre)/sizeof(theatre[0]);i++){
				if(movie==i)con=false;
			}
		}while(con);
		system("cls");
		allSeats();
		cout<<"\n\t";
		textcolor(15,1);
		cout<<setw(34)<<setfill(' ')<<" Select Seats "<<setw(22)<<" ";
		resetcolor();
		textcolor(0,0);
		cout<<"|";
		resetcolor();
		cout<<endl;
		con=true;
		do{
			char chrw;
			do{
				cout<<"\tEnter row A-I : ";cin>>crow;
				if(crow.length()<2 && crow.length()>0){
					chrw=crow.at(0);
					if(islower(chrw))crow=toupper(chrw);
				}
				for(int i=1;i<sizeof(al)/sizeof(al[0]);i++){
					if(crow==al[i]){
						row=i;
						con=false;
					}	
				}
			}while(con);
			con=true;
			do{
				cout<<"\tEnter number 1-18 : ";
				while (!(cin >> col))
				{
					cout<<"\tPlease Enter Number : ";
					cin.clear();
					cin.ignore(123, '\n');
				}
				for(int i=1;i<=18;i++){
					if(col==i)con=false;	
				}
			}while(con);
			
			if(seat[movie-1][row][col]==1){
				con=true;
			}else{
				con=false;
			}
		}while(con);
		
		con=true;
		int receive=0;
		do{
			cout<<"\n\t";
			textcolor(15,2);
			cout<<setw(34)<<" TRANSACTION "<<setw(22)<<" ";
			resetcolor();

			textcolor(0,0);
			cout<<"|";
			resetcolor();
			cout<<endl;

			if(crow=="I" || crow=="H")total=price[movie-1]+100;
			else total=price[movie-1];
			cout<<"\tSummary : "<<total<<" THB"<<endl;
			
			cout<<"\tConfirm the transaction(Y/N) : ";cin>>conf;
			if(conf=='n' || conf=='N'){
				con=false;
				system("cls");
				main();
			}else{
				cout<<"\tEnter Receive : ";
				while (!(cin >> receive))
				{
					cout<<"\tPlease Enter Number : ";
					cin.clear();
					cin.ignore(123, '\n');
				}
			}
			if(receive>=total){
				con=false;
				seat[movie-1][row][col]=1;	
			}
		}while(con);
		if(conf=='Y' || conf=='y'){
			cout<<"\tChange : "<<receive-total<<" THB\n\t";
			system("pause");
			system("cls");

			cout<<"\n\t";
			textcolor(15,12);
			cout<<setw(34)<<" Movie ticket "<<setw(22)<<" ";
			textcolor(0,0);
			cout<<"|";
			resetcolor();
			cout<<endl<<endl; 

			showTicket();
			cout<<"\t";
			system("pause");
			system("cls");
			main();
		}
	}else if(menu==2){
		system("cls");
		movieList();
		con=true;
		do{
			cout<<"\tEnter Theatre : ";cin>>movie;
			for(int i=1;i<=sizeof(theatre)/sizeof(theatre[0]);i++){
				if(movie==i)con=false;
			}
			
		}while(con);
		system("cls");
		allSeats();
	}else if(menu==1){
		system("cls");
		movieList();
	}
	else cout<<"\t";
}




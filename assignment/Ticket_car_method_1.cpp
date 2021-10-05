#include<iostream>
#include<iomanip>
#include<windows.h>
#include<cstring>

using namespace std;

int menu(){
	int type;
	cout<<setw(30)<<"****** MENU ******"<<endl;
	cout<<setw(30)<<"1.) Seat Free "<<endl;
	cout<<setw(30)<<"2.) Reserve Seat"<<endl;
	cout<<setw(30)<<"3.) Exit "<<endl;
	cout<<setw(30)<<"Please Enter 1/2/3 : "; cin>>type;
	
	return type;
}

void showseat (int seat[9][4]) {
    char o;
    for(int r=0; r<9; r++){
        o = 'A';
        for(int c=0; c<4; c++){
            if(seat[r][c] == 1){
                cout<<setw(4)<<"--";
            } else {
                cout<<setw(3)<<r+1<<char(o+c);
            }
                
        }
        cout<<endl;
    }
    cout<<setw(30)<<"---------------------"<<endl;
    
    
}

void selectseat (int seat[9][4] , string n[9][4] ){

    int row,col,choice;
    int total = 0;
	int money = 329;
    int count = 0;
    char column,o,check;
    string name;
    
    showseat(seat);
    
    cout<<setw(30)<<"Enter Name : "; cin>>name;
    
    do{		  
    	cout<<setw(30)<<"Enter Seat : "; cin>>row>>column;
		cout<<setw(30)<<"-----------------------"<<endl;
	    row = row - 1;
	    column = toupper (column);
	    
	
	    if(column == 'A') col = 0;
	    if(column == 'B') col = 1;
	    if(column == 'C') col = 2;
	    if(column == 'D') col = 3;
	
	    seat[row][col] = 1;
	    n[row][col] = name;
	    count++;
//	  showseat(seat);
		cout<<setw(30)<<"Continue ? (Y/y) : "; cin>>check;
	    cout<<setw(30)<<"-----------------------"<<endl;
    	
    }while(check == 'Y' || check == 'y');
    
	system("cls");
    total = count * money;
    cout<<"---- RESERVED SEAT -----"<<endl;
    showseat(seat);
    cout<<setw(30)<<"Person = "<<count<<endl;
    cout<<setw(30)<<"Total  = "<<total<<" Baht "<<endl;
	
}

void display (int seat[9][4] , string n[9][4]) {
	char z;
	int c,r;
	string name;
	for(int row=0; row<9; row++){
			z = 'A';
		for(int col=0; col<4; col++){
			if(seat[row][col] == 1){
				cout<<setw(4)<<"--";
			} else {
				cout<<setw(3)<<row+1<<char(z+col);
			}
			
		}
		cout<<endl;
	}
	cout<<setw(30)<<"------------------"<<endl;
	
	
	for(int r=0; r<9; r++){
		char o = 'A';
		for(int c=0; c<4; c++){
			cout<<r+1<<char(o+c)<<" : "<<n[r][c]<<endl;
		}
		cout<<setw(30)<<"-------------"<<endl;
		
	}
	cout<<endl;

}




void whatever (int number,int seat[9][4],string n[9][4]) {
	switch(number){
		case 1 : cout<<setw(30)<<"---- SEAT FREE -----"<<endl;
				 showseat(seat);        break;
		case 2 : cout<<setw(30)<<"---- RESERVE SEAT -----"<<endl;
				 selectseat(seat,n);    break;
		case 3 : cout<<setw(30)<<"---- RESULT -----"<<endl;
				 display(seat,n);		break;
		default : cout<<setw(30)<<"Please Enter 1/2/3"<<endl;
				  cout<<setw(30)<<"Good luck"<<endl;
	}
}

int main(){
    
	string n[9][4] ;
	int x;
    int seat[9][4] = {{0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0},
                      {0,0,0,0} };
    
   do{
   		system("cls");
   		x = menu();
   		whatever(x,seat,n);
   		system("pause");
   	}while(x != 3);
   
    
    
    return 0;

}



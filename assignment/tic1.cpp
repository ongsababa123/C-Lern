#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;

int menuSelect(int &menu);
int cinemaSelect(int &cinimaSelect);
void display1(int &r1,int &c1,int &count1);
void display2(int &r2,int &c2,int &count2);
void display3(int &r3,int &c3,int &count3);
void selectSeat1(int &r1,int &c1,int &count1);


int main(){
	int r1,c1,count1=0;
	int r2,c2,count2=0;
	int r3,c3,count3=0;
	char check;
	int menu,cinimaSelect;
	int a;
	do{
		menuSelect(menu);
		a = menu;
	}while(a > 2);

	if(menu == 1){
		cinemaSelect(cinimaSelect);
		if(cinimaSelect == 1){
			display1(r1,c1,count1);
			cout << "Are you sure y/yes and n/no : ";cin >> check;
			if(check == 'y'){
				selectSeat1(r1,c1,count1);
				display1(r1,c1,count1);
			}else{
				main();
			}
			
		}
		if(cinimaSelect == 2){
			display2(r2,c2,count2);
		}
		if(cinimaSelect == 3){
			display3(r3,c3,count3);
		}
	}else if(menu == 2){
		cout << "Report";
	}
	display1(r1,c1,count1);
}

int menuSelect(int &menu){
	cout << "----------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Select Cinema or Report" << endl;
    cout << "1. Select Cinema" << endl;
    cout << "2. Select Report" << endl;
    cout << "Enter Select : ";
    cout << "Enter your choice : "; cin >> menu;
    return menu;
}

int cinemaSelect(int &cinimaSelect){
	cout << "----------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Plese Enter Number Select Cinema" << endl;
    cout << "1. Cinema1" << endl;
    cout << "2. Cinema2" << endl;
    cout << "3. Cinema3" << endl;
    cout << "Enter Select Cinema : ";
    cin >> cinimaSelect;
	return cinimaSelect;
}

void display1(int &r1,int &c1,int &count1){
	static int chair1[5][10] = {
					 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	
	if(count1 >= 1){
		chair1[r1][c1] = 1;
	}
	
	cout << setw(30) << "=========================================" << endl;
	char o;
    for (r1 = 0; r1 < 5; r1++)
    {
        o = 'A';
        for (c1 = 0; c1 < 10; c1++)
        {
            if (chair1[r1][c1] == 1)
            {
                cout << setw(4) << "--";
            }
            else
            {
                cout << setw(3) << char(o + r1) << c1 + 1;
            }
        }
        cout << endl;
    }
    cout << setw(30) << "=========================================" << endl;
}

void display2(int &r2,int &c2,int &count2){

	static int chair1[5][10] = {
					 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	cout << setw(30) << "=========================================" << endl;
	char o;
    for (r2 = 0; r2 < 5; r2++)
    {
        o = 'A';
        for (c2 = 0; c2 < 10; c2++)
        {
            if (chair1[r2][c2] == 1)
            {
                cout << setw(4) << "--";
            }
            else
            {
                cout << setw(3) << char(o + r2) << c2 + 1;
            }
        }
        cout << endl;
    }
    cout << setw(30) << "=========================================" << endl;
}

void display3(int &r3,int &c3,int &count3){

	static int chair1[5][10] = {
					 {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
	};
	cout << setw(30) << "=========================================" << endl;
	char o;
    for (r3 = 0; r3 < 5; r3++)
    {
        o = 'A';
        for (c3 = 0; c3 < 10; c3++)
        {
            if (chair1[r3][c3] == 1)
            {
                cout << setw(4) << "--";
            }
            else
            {
                cout << setw(3) << char(o + r3) << c3 + 1;
            }
        }
        cout << endl;
    }
    cout << setw(30) << "=========================================" << endl;
}

void selectSeat1(int &r1,int &c1,int &count1){
	char font;
	cout << "Enter Select Chair : ";
	cin >> font >> c1;
	c1 = c1-1;
	if(font == 'A' || font == 'a'){
		r1 = 0;
	}
	if(font == 'B' || font == 'b'){
		r1 = 1;
	}
	if(font == 'C' || font == 'c'){
		r1 = 2;
	}
	if(font == 'D' || font == 'd'){
		r1 = 3;
	}
	if(font == 'E' || font == 'e'){
		r1 = 4;
	}
	count1++;
}



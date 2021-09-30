//6406021421171-3 Sec B จิลายุทธ บัณฑิต//
//version Loop do while//
#include <iostream>

using namespace std;
int day,month,year;
int sum_day;

int yearold=2513;
int monthold=1;
int dayold=1;

int ny=0,nn=0,nd=0;



int main(){
    cout << endl;
    do{
    cout << "Please enter day : "; cin>>day;
    }while(day < 1 || day > 30);

    do{ 
    cout << "please enter month : "; cin>>month;
    }while(month < 1 || month > 12 );

    do{
    cout << "please enter year : "; cin>>year;
    }while(year < 2513 || month > 2599);
//////////////////////////////////////////
  do{
      ny = ny+1;
      year--;
    }while(yearold < year);

    int total_year = (ny*12)*30;
/////////////////////////////////////////
     do{
      nn = nn+1;
      month--;
    }while(monthold < month);

    int total_month = nn*30;
/////////////////////////////////////////
    do{
      nd = nd+1;
      day--;
    }while(dayold < day);

    int total_day = nd;
/////////////////////////////////////////    
    
  sum_day = total_day+total_month+total_year;
  
    cout << endl;
    cout << "The difference is about " << sum_day << " days " <<endl;
      return 0;
}
//6406021421171-3 Sec B จิลายุทธ บัณฑิต//
//version not loop//
#include <iostream>

using namespace std;
int day,month,year;
int sum_day;



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

    year = (year - 2513)*12*30;
    month = (month - 1)*30;
    day = (day - 1);

    sum_day = year+month+day;
    cout << endl;
    cout << "The difference is about " << sum_day << " days " <<endl;

      return 0;
}
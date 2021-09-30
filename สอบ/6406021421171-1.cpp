//6406021421171-1 Sec B จิลายุทธ บัณฑิต//
#include <iostream>

using namespace std;

int main(){
    int year;
    cout << "Please Enter year : "; cin >> year;
    if((year%4)==0 && (year%100)!=0)
    {
        cout << "Year " << year << " is a leap year ";
        return 0; 
    }

    if((year%100)==0 && (year%400)==0)
    {
        cout << "Year " << year << " is a leap year ";
        return 0; 
    }
   
    else  if((year%4)!=0 && (year%100)==0){
        cout << "Year " << year << " is not a leap year ";
        return 0;
    }

     else  if((year%4)==0 && (year%100)==0){
        cout << "Year " << year << " is not a leap year ";
        return 0;
    }

     else  if((year%100)!=0 && (year%400)!=0){
        cout << "Year " << year << " is not a leap year ";
        return 0;
    }
    return 0;
}
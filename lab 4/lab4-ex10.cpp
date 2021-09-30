#include <iostream>
using namespace std;
int main()
{
    int salary,total;
    cout << "จำนวนเงินเดือน :"; 
    cin >> salary; 
    if(salary <= 100000){
        total = salary * 5/100;
    }else if(salary >= 100001 && salary <= 500000){
        total = salary * 10/100;
    }else if(salary >= 500001 && salary <= 1000000){
        total = salary * 20/100;
    }else if(salary >= 1000001 && salary <= 4000000){
        total = salary * 30/100;
    }else{
        total = salary * 37/100;
    }
    cout << "จำนวนภาษีที่จะต้องเสีย : " << total << endl; 
    cout << "จำนวนเงินที่ได้รับ (หักภาษีแล้ว) : " << (salary - total) << endl; 
    return (0);
}
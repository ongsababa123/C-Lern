//Home work 7 คิดเปอร์เซ็นสินค้า
#include<iostream>

using namespace std;
int main()
{
    int price = 0;
    int vat = 0;
    
    cout << "Enter price : ";
    cin >> price;
    cout << "Enter vat (%) : "; 
    cin >> vat;
    cout <<endl;
  
    cout << "Net Price of product = "<<(price*vat/100)+price;

    return(0);
}
#include<iostream>
#include<string>

using namespace std;
int main()
{
    float Price, Tax, Total, Tax_Rate = 0.07f;
    string ProductName;
    cout << "Enter product name : ";
    cin >> ProductName;
    cout << "Enter product price : ";
    cin >> Price;
    cout << endl;
    // case 1
    Tax = Price * Tax_Rate;
    Total = Price + Tax;
    //case 2
    //Total = Price + Price * Tax_Rate;
    cout << "Price of "<< ProductName << " = "<< Price << endl;
    cout <<"Tax(%7) of "<< ProductName << " = "<< Tax << endl;
    cout << "Total Price of "<< ProductName << " = "<< Total <<endl;
    return(0);
}
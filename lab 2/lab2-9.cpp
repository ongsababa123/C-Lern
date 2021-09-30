#include<iostream>
#include<string>
using namespace std;
int main()
{
    string Name;
    int Age;
    cout << "Enter name : ";
    cin >> Name;
    cout << "Enter age : ";
    cin >> Age;
    cout << "\nHello, "<< Name << "."<< endl;
    cout << "You have "<< Age << " year old."<< endl;
    cout << "You are beginner programmer."<< endl;
    return(0);
}
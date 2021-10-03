//homework square 6406021421171 Jirayut Bandit ITI SEC B
#include <iostream>

using namespace std;

int main()
{
    int number,n;
    cout << "Enter an Integer : "; cin>>number;
    n = number-2;

    for (int i = 1; i <= number; i++){
        cout << "*";
    }
    cout <<endl;

 
    for(int i = 1; i <= n; i++){
    cout << "*";
    for (int i = 1; i <= n; i++){
        cout << " ";
    }
    cout << "*";
    cout <<endl;
    }

    for (int i = 1; i <= number; i++){
        cout << "*";
    }
    cout <<endl;
  
    return 0;
}
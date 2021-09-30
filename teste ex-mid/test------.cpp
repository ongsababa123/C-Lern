#include <iostream>

using namespace std;

int main(){
    int kilo,price;
    do {
        cout << "enter kilo : "; cin>>kilo;

        if (kilo >= 21)
        {
             price = ((kilo-1)*2)+40;
        }
        
        else if (kilo >= 16)
        {
             price = ((kilo-1)*3)+40;
        }

        else if (kilo >= 11)
        {
             price = ((kilo-1)*4)+40;
        }

        else if (kilo >= 2)
        {
             price = ((kilo-1)*2)+40;
        }
        else if (kilo > 0 && kilo <= 1 )
             price = 40;

        cout << "taxie price = " << price << " bath " << endl;
    } while (kilo < 0);
    
    return 0;
}
#include <iostream>

using namespace std;

int main() 
{
    int n,m;
    
  
  do{
     cout << " select 1 " << endl;
     cout << " select 2 " << endl;
     cout << " select 3 " << endl;
     cout << " select 4 " << endl;
     cout << "enter select "; cin >> n;
    switch (n){
      case 1 :
        m = 1;
        cout << "select 1 " << endl;
        break;

      case 2 :
        m = 1;
        cout << "select 2 " << endl;
        break;

      case 3 :
        m = 1;
        cout << "select 3 " << endl;
        break;

      case 4 :
         m = 1;
        cout << "select 4 " << endl;
        break;

    default :
         m = 0;
      cout << "enter select agin " << endl;
    }
  }while (m == 0); 
    return 0;
}
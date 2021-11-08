#include <iostream>

using namespace std;

int main()
{

    int a[3][3] = {0};
    int b[3][3] = {0};
    for (int i = 0; i < 3; i++)
    {   
        for (int j = 0; j < 3; j++){
        cin >> a[i][j];
    }
    }

    for (int i = 0; i < 3; i++)
    {
        cout<<endl;
        for (int j = 0; j < 3; j++){
            cout << a[i][j];
        }
    }
    
    for (int i = 0; i < 3; i++)
    {
        b[2][i] = a[0][i];
        b[1][i] = a[1][i];
        b[0][i] = a[2][i];
    }
    
     for (int i = 0; i < 3; i++)
    {   
        cout << endl;
        for (int j = 0; j < 3; j++){
        cout << b[i][j];
    }
    }

    
    
    return (0);
    }
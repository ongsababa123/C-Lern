#include <iostream>

using namespace std;

bool match(int integer[]);

int main()
{
    int integer[12];
    int i;
    cout << "Enter 13 integer : ";
    for (i = 0; i <= 12; i++)
    {
        cin >> integer[i];
    }
    

    
    if (match(integer)){
        cout << "Symmetry. ";
    }
    else {
        cout << "Not symmetry.";
    }
    return 0;
}

bool match(int integer[])
{
    for (int i = 0; i <= 12; i++)
    {
        if (integer[i] != integer[12-i])
        {
            return false;
            break;
        }else return true;
    }
    return 0;
}
    


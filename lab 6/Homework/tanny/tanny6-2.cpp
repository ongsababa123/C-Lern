#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <time.h>
using namespace std;

void RandomPoint(int number);
int main()
{
    int student = 500, num;
    cout << "Enter number student chairman : ";
    cin >> num;
    const int Array_Size = num;
    cout << endl;
    cout << "Number of right student : " << student << endl;
    cout << "Number of Votes : 420 = " << fixed << setprecision(1) << float(420 / 5) << "%" << endl;
    cout << "Number of not Votes : 80 = " << fixed << setprecision(1) << float(80 / 5) << "%" << endl;
    cout << endl;

    cout << "Result of election chairman" << endl;
    cout << "----------------------------" << endl;
    cout << " No.    Votes.   Percent(%)" << endl;
    cout << "----------------------------" << endl;
    RandomPoint(Array_Size);

    return 0;
}

void RandomPoint(int Array_Size)
{
    int chairman[Array_Size], student = 420, num = 420;

    srand(time(0));

    for (int i = 0; i < Array_Size - 1; i++)
    {
        student = rand() % student + 1;
        chairman[i] = student;
        num -= student;

        if (num != 0)
        {
            student = rand() % num + 1;
            cout << "  " << i + 1 << ".";
            cout << "      " << chairman[i] << "       ";
            cout << fixed << setprecision(2) << double(chairman[i] * 100 / 420) << endl;
        }
        else if (num == 0)
        {                
            break;
        }
    }
    if (num != 0)
    {
        chairman[Array_Size] = num;
        cout << "  " << Array_Size << ".";
        cout << "      " << chairman[Array_Size] << "       ";
        cout << fixed << setprecision(2) << double(chairman[Array_Size] * 100 / 420) << endl;
    }
    cout << "----------------------------" << endl;
    cout << "Total    420       100.00" << endl;
}

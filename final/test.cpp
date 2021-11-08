#include <iostream>
#include <time.h>
#include <iomanip>

using namespace std;

void disarray(int number[6][6]);
void sort(int number[6][6]);

int main()
{
    int number[6][6];
    srand((unsigned int)time(0));
    for (int r = 0; r < 5; r++)
    {
        for (int c = 0; c < 5; c++)
        {
            number[r][c] = rand() % 84;
            if (number[r][c] < 38)
            {
                number[r][c] = number[r][c] + 46;
            }
        }
    }
    cout << "Display Data in Array Before Sorting" << endl;
    disarray(number);
    sort(number);
    cout << "Display Data in Array After Sorting" << endl;
    disarray(number);
    return 0;
}

void disarray(int number[6][6])
{
    for (int r = 0; r < 6; r++)
    {
        for (int c = 0; c < 6; c++)
        {
            cout << " "
                 << "[" << number[r][c] << "]";
            if (c == 5)
            {
                cout << "\n";
            }
        }
    }
}

void sort(int number[6][6])
{
    int x;
    for (int i = 0; i < 100; i++)
    {
        for (int r = 0; r < 6; r++)
        {
            for (int c = 0; c < 6; c++)
            {
                if (number[r][c] >= number[r][c + 1])
                {
                    x = number[r][c];
                    number[r][c] = number[r][c + 1];
                    number[r][c + 1] = x;
                }
            }
        }
    }
}
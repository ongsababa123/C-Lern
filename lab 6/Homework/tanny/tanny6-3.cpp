#include <iostream>
#include <string>
#include <time.h>
#include <iomanip>
using namespace std;
void getdata(string stdData[][3], float score[][4], const int max);
void scoreReal(float score[][4], const int max, const int row);
void sortdata(string stdData[][3], float score[][4], const int max);
void swap(string stdData[][3], float score[][4], const int i, const int j);
void average(float score[][4], const int max);
void displaydata(string stdData[][3], float score[][4], const int max);

int main()
{
    const int max = 20;
    string stdData[max][3];
    float score[max + 1][4];

    getdata(stdData, score, max);
    sortdata(stdData, score, max);
    average(score, max);
    displaydata(stdData, score, max);

    return 0;
}

void getdata(string stdData[][3], float score[][4], const int max)
{

    for (int i = 0; i < max; i++)
    {
        cout << "Enter ID " << i + 1 << " : ";
        cin >> stdData[i][0];
        cout << "Enter Name : ";
        cin >> stdData[i][1];
    }
    srand((unsigned int)time(0));
    for (int i = 0; i < max; i++)
    {
        float sum = 0;
        for (int n = 0; n < 3; n++)
        {
            score[i][n] = (float)(rand() % 101);
            sum += score[i][n];
        }
        score[i][3] = sum;
    }
    scoreReal(score, max, 4);
}

void scoreReal(float score[][4], const int max, const int row)
{

    for (int i = 0; i < max; i++)
    {
        float sum = 0;
        for (int n = 0; n < row; n++)
        {
            if (n == 0)
                score[i][n] = (float)(score[i][n] / 4);
            if (n == 1)
                score[i][n] = (float)(score[i][n] / 4);
            if (n == 2)
                score[i][n] = (float)(score[i][n] / 2);
            if (n == 3)
                score[i][n] = sum;
            sum += score[i][n];
        }
    }
}

void sortdata(string stdData[][3], float score[][4], const int max)
{
    int n;
    for (int i = 0; i < max - 1; i++)
    {
        n = i;
        for (int j = i; j < max; j++)
        {
            if (score[i][3] < score[j][3])
            {
                swap(stdData, score, i, j);
            }
        }
    }
}

void swap(string stdData[][3], float score[][4], const int i, const int j)
{
    float tmp;
    string data;
    for (int h = 0; h < 2; h++)
    {
        data = stdData[i][h];
        stdData[i][h] = stdData[j][h];
        stdData[i][h] = data;
    }
    for (int h = 0; h < 4; h++)
    {
        tmp = score[i][h];
        score[i][h] = score[j][h];
        score[j][h] = tmp;
    }
}

void average(float score[][4], const int max)
{

    for (int n = 0; n < 4; n++)
    {
        float sum = 0;
        for (int i = 0; i < max; i++)
        {
            sum += score[i][n];
        }
        score[max][n] = sum / max;
    }
}

void displaydata(string stdData[][3], float score[][4], const int max)
{
    cout << "\nResult\n";
    cout << fixed;
    cout << "---------------------------------------------------------------------------------------------\n";
    cout << setw(5) << "No." << setw(7) << "ID" << setw(7) << "Name" << setw(30) << "Test1(25%)" << setw(15) << "Test2(25%)" << setw(15) << "Test3(50%)" << setw(15) << "Total(100%)\n";
    cout << "---------------------------------------------------------------------------------------------\n";
    for (int i = 0; i < max; i++)
    {
        cout << "  ";
        cout << left << setw(5) << i + 1;
        cout << left << setw(7) << stdData[i][0].substr(0, 5);
        cout << left << setw(25) << stdData[i][1].substr(0, 20);
        cout << setprecision(2);
        for (int n = 0; n < 4; n++)
        {
            cout << setw(15) << score[i][n];
        }
        cout << endl;
    }
    cout << "---------------------------------------------------------------------------------------------\n";
    cout << "Average  of  mark                       ";

    for (int i = 0; i < 4; i++)
    {
        cout << setw(15) << score[max][i];
    }
    cout << endl;
    cout << "---------------------------------------------------------------------------------------------\n";
}
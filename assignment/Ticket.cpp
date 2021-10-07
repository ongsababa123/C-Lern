#include <iostream>
#include <iomanip>
#include <cstring>
using namespace std;

void timeselect(int &time);
void timedisplay(int time);
void cinemaselect(int &cinema);
void menuselect(int &menu);
void chairshow(int chair[5][10], int time);
void selectchair(int chair[5][10], int time);
void inputname(string name[]);

int main()
{
    int cinema, time, menu, chaircol;
    int chairrow;
    char exit;
    string ok;
    string name[100];
    
    int chair[5][10]{{0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
                     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}};
    inputname(name);
do{
    menuselect(menu);

    switch (menu)
    {

    case 1:
        cinemaselect(cinema);
        break;

    case 2:
        cout << "Report" << endl;
        break;

    default:
        break;
    }

    /*-------------------------Select Cinema------------*/
    switch (cinema)
    {
    case 1:
        timeselect(time);
        cout << endl;
        break;

    case 2:
        break;

    case 3:
        break;

    case 4:
        break;

    default:
        cout << "----------Please Enter Cinema Agin----------" << endl;
        break;
    }
    /*-------------------------time------------*/
    switch (time)
    {

    case 1:
        time = 1;
        break;

    case 2:

        break;

    case 3:

        break;

    default:
        cout << "----------Please Enter Time Agin----------" << endl;
        break;
    }

    switch (time)
    {
        case 1:
        timedisplay(time);
        selectchair(chair, time);
        break;

        default:
        break;
    }
    cout << " continue ? "; cin>>exit;
    }while(exit == 'y');
    return 0;
}

void menuselect(int &menu)
{
    cout << endl;
    cout << "Select Cinema or Report" << endl;
    cout << "1. Select Cinema" << endl;
    cout << "2. Select Report" << endl;
    cout << "Enter Select : ";
    cin >> menu;
    cout << endl;
}

void timeselect(int &time)
{
    int timedisplay;
    cout << "----------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Select Time" << endl;
    cout << "1. 10:00" << endl;
    cout << "2. 13:00" << endl;
    cout << "3. 16:00" << endl;
    cout << "Select : ";
    cin >> time;
    cout << endl;
}

void timedisplay(int time)
{
    if (time == 1)
    {
        cout << setw(30) << "You Select Time 10:00 " << endl;
    }
    if (time == 2)
    {
        cout << setw(30) << "You Select Time 13:00 " << endl;
    }
    if (time == 3)
    {
        cout << setw(30) << "You Select Time 16:00 " << endl;
    }
}

void cinemaselect(int &cinema)
{
    cout << "----------------------------------------------------------------------------" << endl;
    cout << endl;
    cout << "Plese Enter Number Select Cinema" << endl;
    cout << "1. Cinema1" << endl;
    cout << "2. Cinema2" << endl;
    cout << "3. Cinema3" << endl;
    cout << "Enter Select Cinema : ";
    cin >> cinema;
    cout << endl;
}

void chairshow(int chair[5][10], int time)
{
    char o;
    timedisplay(time);
    cout << "==========================================" << endl;
    for (int r = 0; r < 5; r++)
    {
        o = 'A';
        for (int c = 0; c < 10; c++)
        {
            if (chair[r][c] == 1)
            {
                cout << setw(4) << "--";
            }
            else
            {
                cout << setw(3) << char(o + r) << c + 1;
            }
        }
        cout << endl;
    }
    cout << "==========================================" << endl;
}

void selectchair(int chair[5][10], int time)
{

    int row, col, cols, round = 0, money = 120, total;
    char check, check1, rowrow, o, ok;
    do
    {

        do
        {

            do
            {

                do
                {
                    ok = 0;
                    chairshow(chair, time);
                    cout << "Enter 0 to cancel " << endl;
                    cout << "Enter p to PAY " << endl;
                    cout << "Enter Select Chair : ";
                    cin >> rowrow;
                    cout << endl;
                    if (rowrow == 'p')
                    {
                        total = round * money;

                        cout << " Total Chair Select : " << round << endl;
                        cout << " Price Total = " << total << endl;
                        return;
                    }
                    if (rowrow == '0')
                    {
                        cout << " Are you cancel sure ? y/n : ";
                        cin >> ok;
                        cout << endl;
                        if (ok == 'y' || ok == 'Y')
                        {
                            for (int r = 0; r < 5; r++)
                            {
                                o = 'A';
                                for (int c = 0; c < 10; c++)
                                {
                                    if (chair[r][c] == 1)
                                    {
                                        chair[r][c] = 0;
                                        cout << setw(3) << char(o + r) << c + 1;
                                    }
                                    else
                                    {
                                        cout << setw(3) << char(o + r) << c + 1;
                                    }
                                }
                                cout << endl;
                            }
                            cout << endl;
                            cout << setw(25) << " Cancel " << endl;
                            chairshow(chair, time);
                            return;
                        }
                    }
                } while (ok == 'n' || ok == 'N');
                cin >> col;
                col = col - 1;
                cols = col + 1;

                if (rowrow == 'A' || rowrow == 'a')
                    row = 0;
                if (rowrow == 'B' || rowrow == 'b')
                    row = 1;
                if (rowrow == 'C' || rowrow == 'c')
                    row = 2;
                if (rowrow == 'D' || rowrow == 'd')
                    row = 3;
                if (rowrow == 'E' || rowrow == 'e')
                    row = 4;

                if (chair[row][col] == 1)
                {
                    cout << "You are cancel Chair = " << rowrow << cols << endl;
                    cout << " Are you sure y/n : ";
                    cin >> ok;
                    if (ok == 'y' || ok == 'Y')
                    {
                        cout << " You cancel Chair = " << rowrow << cols << endl;
                        chair[row][col] = 0;
                        round = round - 1;
                    }
                }
            } while (ok == 'y' || ok == 'Y');
            chair[row][col] = 1;

            chairshow(chair, time);
            timedisplay(time);
            cout << setw(30) << " You Select Chair = " << rowrow << cols << endl;
            cout << setw(30) << "Are you sure Y/N : ";
            cin >> ok;
            cout << setw(30) << "-----------------------" << endl;
            if (ok == 'n' || ok == 'N')
            {
                chair[row][col] = 0;
                round = round - 1;
            };
            round++;
        } while (ok == 'y' || ok == 'Y');

        cout << setw(30) << "Continue ? (y/n) : ";
        cin >> check;
        cout << setw(30) << "-----------------------" << endl;
    } while (check == 'Y' || check == 'y');

    chair[row][col] = 0;

    total = round * money;

    chairshow(chair, time);
    cout << " Total Chair Select : " << round << endl;
    cout << " Price Total = " << total << endl;
    return;
}

void inputname(string name[]){
    int i;
    cout << " Enter name : ";
    for (int i = 0; i < 1; i++){
        cin >> name[i];  
    }

    for (int i = 0; i < 1; i++){
        cout <<endl;
        cout << "Welcome : " << name[i];
        cout <<endl;
    }  
}
#include <iostream>
#include <iomanip>
#include <cstring>
#include <fstream>
using namespace std;

void timeselect(int &time);
void timedisplay(int time);
void cinemaselect(int &cinema);
void cinemadisplay(int cinema);
void menuselect(int &menu);
void selectchair(int chair[5][10], int time, int cinema);

int chaircount(int chair[5][10], int &n);

int main()
{
    int cinema, time, menu, chaircol, n;
    int chairrow;
    char exit;
    string ok;
    int chair1_1[5][10] = {0};
    int chair1_2[5][10] = {0};
    int chair1_3[5][10] = {0};

    int chair2_1[5][10] = {0};
    int chair2_2[5][10] = {0};
    int chair2_3[5][10] = {0};

    int chair3_1[5][10] = {0};
    int chair3_2[5][10] = {0};
    int chair3_3[5][10] = {0};

    do
    {
        do
        {

            menuselect(menu);

            if (menu == 1)
            {
                cinemaselect(cinema);
            }

            if (menu == 2)
            {
                ofstream fout("Report.txt");

                cout << " Cinema 1 Time 10:00 ";
                chaircount(chair1_1, n);
                cout << endl;
                fout << " Cinema 1 Time 10:00 Chair Reserve = " << n << endl;

                cout << " Cinema 1 Time 13:00 ";
                chaircount(chair1_2, n);
                cout << endl;
                fout << " Cinema 1 Time 13:00 Chair Reserve = " << n << endl;

                cout << " Cinema 1 Time 16:00 ";
                chaircount(chair1_3, n);
                cout << endl;
                fout << " Cinema 1 Time 16:00 Chair Reserve = " << n << endl;

                cout << " Cinema 2 Time 10:00 ";
                chaircount(chair2_1, n);
                cout << endl;
                fout << " Cinema 2 Time 10:00 Chair Reserve = " << n << endl;

                cout << " Cinema 2 Time 13:00 ";
                chaircount(chair2_2, n);
                cout << endl;
                fout << " Cinema 2 Time 13:00 Chair Reserve = " << n << endl;

                cout << " Cinema 2 Time 16:00 ";
                chaircount(chair2_3, n);
                cout << endl;
                fout << " Cinema 2 Time 16:00 Chair Reserve = " << n << endl;

                cout << " Cinema 3 Time 10:00 ";
                chaircount(chair3_1, n);
                cout << endl;
                fout << " Cinema 3 Time 10:00 Chair Reserve = " << n << endl;

                cout << " Cinema 3 Time 13:00 ";
                chaircount(chair3_2, n);
                cout << endl;
                fout << " Cinema 3 Time 13:00 Chair Reserve = " << n << endl;

                cout << " Cinema 3 Time 16:00 ";
                chaircount(chair3_3, n);
                cout << endl;
                fout << " Cinema 3 Time 16:00 Chair Reserve = " << n << endl;
                fout.close();
                return 0;
            }
            /*-------------------------Select Cinema------------*/
            switch (cinema)
            {
            case 1:
                timeselect(time);
                cout << endl;
                break;

            case 2:
                timeselect(time);
                cout << endl;
                break;

            case 3:
                timeselect(time);
                cout << endl;
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
                time = 2;
                break;

            case 3:
                time = 3;
                break;

            default:
                cout << "----------Please Enter Time Agin----------" << endl;
                break;
            }

            if (cinema == 1 && time == 1)
            {
                selectchair(chair1_1, time, cinema);
            }
            else if (cinema == 1 && time == 2)
            {
                selectchair(chair1_2, time, cinema);
            }
            else if (cinema == 1 && time == 3)
            {
                selectchair(chair1_3, time, cinema);
            }
            else if (cinema == 2 && time == 1)
            {
                selectchair(chair2_1, time, cinema);
            }
            else if (cinema == 2 && time == 2)
            {
                selectchair(chair2_2, time, cinema);
            }
            else if (cinema == 2 && time == 3)
            {
                selectchair(chair2_3, time, cinema);
            }
            else if (cinema == 3 && time == 1)
            {
                selectchair(chair3_1, time, cinema);
            }
            else if (cinema == 3 && time == 2)
            {
                selectchair(chair3_2, time, cinema);
            }
            else if (cinema == 3 && time == 3)
            {
                selectchair(chair3_3, time, cinema);
            }
            else
            {
                cout << " !!!Error enter cinema and time agin!!! " << endl;
            }
        } while (cinema > 4 && time > 4);

        cout << " Exit Program ? y/n : ";
        cin >> exit;
    } while (exit == 'n');

    return 0;
}

void menuselect(int &menu)
{
    menu = 0;
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
    time = 0;
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
        cout << setw(30) << "Time 10:00 " << endl;
    }
    if (time == 2)
    {
        cout << setw(30) << "Time 13:00 " << endl;
    }
    if (time == 3)
    {
        cout << setw(30) << "Time 16:00 " << endl;
    }
}

void cinemadisplay(int cinema)
{
    if (cinema == 1)
    {
        cout << setw(30) << "Cinema 1 " << endl;
    }
    if (cinema == 2)
    {
        cout << setw(30) << "Cinema 2 " << endl;
    }
    if (cinema == 3)
    {
        cout << setw(30) << "Cinema 3 " << endl;
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

/*void chairshow(int chair[5][10], int time)
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
}*/

void selectchair(int chair[5][10], int time, int cinema)
{
    int row, col, cols, round = 0, money = 120, total, round2 = 1;
    char check, check1, rowrow, o, ok;
    int backuprow[round2] = {0};
    int backupcol[round2] = {0};
    for (int i = 0; i < round2; i++)
    {
        backuprow[i] = 0;
        backupcol[i] = 0;
    }

    do
    {
        for (int i = 0; i < round2;)
        {
            do
            {

                do
                {
                    do
                    {

                        do
                        {

                            check = 0;
                            ok = 0;
                            /*chairshow(chair, time);*/
                            cinemadisplay(cinema);
                            timedisplay(time);
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
                            cout << "Enter 0 to cancel " << endl;
                            cout << "Enter p to PAY " << endl;
                            cout << "Enter q to exit " << endl;
                            cout << "Enter Select Chair : ";
                            cin >> rowrow;
                            cout << endl;
                            if (rowrow == 'q')
                            {
                                if (round == 0)
                                {
                                    return;
                                }
                                if (round > 0)
                                {
                                    cout << setw(35) << " !You are not pay chair! " << endl;
                                    cout << " Are you cancel Chair ? y/n : ";
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
                                        return;
                                    }
                                }
                            }
                        } while (ok == 'n' || ok == 'N');

                        if (rowrow == 'p')
                        {
                            round2 = round2 - 1;
                            total = round * money;

                            cout << " Total Chair Select : " << round << endl;
                            cout << " Price Total = " << total << endl;
                            for (int i = 0; i < round2; i++)
                            {
                                cout << backuprow[i];
                                cout << backupcol[i] << endl;
                            }
                            return;
                        }
                        if (rowrow == '0')
                        {
                            cout << " Are you cancel sure ? y/n : ";
                            cin >> ok;
                            cout << endl;
                            if (ok == 'y' || ok == 'Y')
                            {
                                round2 = round2 - 1;

                                for (int i = 0; i < round2; i++)
                                {
                                    cout << backuprow[i];
                                    cout << backupcol[i] << endl;

                                    chair[backuprow[i]][backupcol[i]] = 0;
                                }
                                cout << endl;
                                cout << setw(25) << " Cancel " << endl;
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
                timedisplay(time);
                cout << setw(30) << " You Select Chair = " << rowrow << cols << endl;
                cout << setw(30) << "Are you sure Y/N : ";
                cin >> ok;
                cout << setw(30) << "-----------------------" << endl;
                if (ok == 'n' || ok == 'N')
                {
                    chair[row][col] = 0;
                    round = round - 1;
                    round2 - round2 - 1;
                };
                round++;
                round2++;
                backuprow[i] = row;
                backupcol[i] = col;
                cout << backuprow[i] << endl;
                cout << backupcol[i] << endl;
                i++;
            } while (ok == 'y' || ok == 'Y');
        }
        cout << setw(30) << "Continue ? y/n : ";
        cin >> check;
        cout << setw(30) << "-----------------------" << endl;
    } while (check == 'Y' || check == 'y');

    chair[row][col] = 0;

    total = round * money;

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
    cout << " Total Chair Select : " << round << endl;
    cout << " Price Total = " << total << endl;

    return;
}

int chaircount(int chair[5][10], int &n)
{
    char o;
    n = 0;
    for (int r = 0; r < 5; r++)
    {
        o = 'A';
        for (int c = 0; c < 10; c++)
        {
            if (chair[r][c] == 1)
            {
                n++;
            }
            else
            {
                char(o + r);
                c = c + 1;
            }
        }
    }
    cout << " Chair Reserve = " << n << endl;
    return n;
}

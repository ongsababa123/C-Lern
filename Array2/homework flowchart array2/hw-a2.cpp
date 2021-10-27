#include <iostream>
#include <iomanip>

using namespace std;

void selectsex(float sexx[],int total[15][4]);
void selectage(float age[]);
void selectscore1(float Q[]);
void selectscore2(float Q[]);
int main()
{
    int total[15][4] = {0};
    float sexx[2] = {0};
    float age[4] = {0};
    float Q1[3] = {0};
    float Q2[3] = {0};

    for (int i = 0; i < 15; i++)
    {
            selectsex(sexx,total);
            selectage(age);
            selectscore1(Q1);
            selectscore2(Q2);
    }

    // display

    cout << "---------------------------------------------" << endl;
    cout << "    "<< "age" << "      " << "sex" << "      " << "canteen" << "      " << "Toilet" << endl;
    cout << "---------------------------------------------" << endl;
    return 0;
}

void selectsex(float sexx[],int total[15][4])
{
    int sex = 0;
    do
    {

        cout << " Select Sex " << endl;
        cout << " 1 = Male " << endl;
        cout << " 2 = Female " << endl;

        cout << " Enter Sex ";
        cin >> sex;

        total = sex;
        if (sex == 1)
        {
            // male//
            sexx[0]++;
        }
        else if (sex == 2)
        {
            // female//
            sexx[1]++;
        }
        system("cls");
    } while (sex > 2 || sex < 1);
}

void selectage(float age[])
{
    int age1 = 0;
    do
    {
        system("cls");
        cout << " Enter number Age ";
        cin >> age1;

        if (age1 >= 1 && age1 <= 17)
        {
            age[0]++;
        }
        else if (age1 >= 18 && age1 <= 34)
        {
            age[1]++;
        }
        else if (age1 >= 35)
        {
            age[2]++;
        }
    } while (age1 <= 0);
}

void selectscore1(float Q[])
{
    int aa = 0;
    system("cls");
    cout << " Select Score " << endl;
    cout << " 1 = Good " << endl;
    cout << " 2 = Mid " << endl;
    cout << " 3 = Bad " << endl;

    cout << " Enter score Canteen : ";
    cin >> aa;
    if (aa == 1)
    {
        Q[0]++;
    }
    else if (aa == 2)
    {
        Q[1]++;
    }
    else if (aa == 3)
    {
        Q[2]++;
    }
}

void selectscore2(float Q[])
{
    int aa = 0;
    system("cls");
    cout << " Select Score " << endl;
    cout << " 1 = Good " << endl;
    cout << " 2 = Mid " << endl;
    cout << " 3 = Bad " << endl;

    cout << " Enter score Toilet : ";
    cin >> aa;
    if (aa == 1)
    {
        Q[0]++;
    }
    else if (aa == 2)
    {
        Q[1]++;
    }
    else if (aa == 3)
    {
        Q[2]++;
    }
}

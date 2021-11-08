#include <iostream>
#include <iomanip>

using namespace std;

void calcanteen(int data[15][4]);

int main()
{
    int data[15][4] = {0};

    for (int r = 0; r < 15; r++){
        for (int c = 0; c < 5;)
        {
            system("cls");
            cout << " Human number [" << r << "]" << endl;
             cout << " Select Age " <<endl;
            cout << " 1 = < 18" << endl;
            cout << " 2 = 18 - 34 " << endl;
            cout << " 3 = 35+ " << endl;  
            cout << " Enter Select Age : "; cin>>data[r][c];        
            c++;

            system("cls");
            cout << " Human number [" << r << "]" << endl; 
            cout << " Select Sex " <<endl;
            cout << " 1 = Female " << endl;
            cout << " 2 = Male " << endl;
            cout << " Enter Select Sex : "; cin>>data[r][c];
            c++;

            system("cls");
            cout << " Human number [" << r << "]" << endl; 
            cout << " Select score canteen " <<endl;
            cout << " 1 = Good " << endl;
            cout << " 2 = Bad " << endl;
            cout << " Enter Select score : "; cin>>data[r][c];
            c++;

            system("cls");
            cout << " Human number [" << r << "]" << endl; 
            cout << " Select score toilet " <<endl;
            cout << " 1 = Good " << endl;
            cout << " 2 = Bad " << endl;
            cout << " Enter Select toilet : "; cin>>data[r][c];
            c++;
        } 
    }
    calcanteen(data);
}

void calcanteen(int data[15][4])
{
    int canteen[3][5] = {0};
    
    for (int r = 0; r < 16; r++){
        for (int c = 0; c < 3;){
            
            //age 1
            if (data[r][c] == 1)
            {
                canteen[0][0]++;
                c++;
                //sex
                if (data[r][c] == 1)
                {
                    canteen[0][1]++;
                }
                else if (data[r][c] == 2)
                {
                    canteen[0][2]++;
                }
                
                c++;
                //score
                if (data[r][c] == 1)
                {
                    canteen[0][3]++;
                }
                else if (data[r][c] == 2)
                {
                    canteen[0][4]++;
                }
                c++;
            }

            //age 2
            else if (data[r][c] == 2)
            {
                canteen[1][0]++;
                c++;
                //sex
                if (data[r][c] == 1)
                {
                    canteen[1][1]++;
                }
                else if (data[r][c] == 2)
                {
                    canteen[1][2]++;
                }
                
                c++;
                //score
                if (data[r][c] == 1)
                {
                    canteen[1][3]++;
                }
                else if (data[r][c] == 2)
                {
                    canteen[1][4]++;
                }
                c++;
            }

              //age 3
            else if (data[r][c] == 3)
            {
                canteen[2][0]++;
                c++;
                //sex
                if (data[r][c] == 1)
                {
                    canteen[2][1]++;
                }
                else if (data[r][c] == 2)
                {
                    canteen[2][2]++;
                }
                
                c++;
                //score
                if (data[r][c] == 1)
                {
                    canteen[2][3]++;
                }
                else if (data[r][c] == 2)
                {
                    canteen[2][4]++;
                }
                c++;
            }    

        }
    }
    

    for (int r = 0; r < 4; r++)
    {
        for (int c = 0; c < 6; c++)
        {
            
            cout << canteen[r][c] / 15 << endl;
        }
        
    }
    
}
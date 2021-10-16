#include <iostream>
#include <iomanip>
#include <time.h>

using namespace std;

void display1(int stu[], int number,float &total);
void display2(int stu[], int number,float total);

int main()
{
   int number,student = 500,n;
   float total;
   srand((unsigned int)time(0));

   cout << "Enter number student chairman : "; cin >> number;
   cout << endl;
   int stu[number] = {};
   cout << "Number of right student : " << student << endl;

   for (int i = 0; i < number; i++)
   {
      stu[i] = rand() % student +1;
      student = student - stu[i];
      cout << stu[i] << endl;
   }
   display1(stu,number,total);
   display2(stu,number,total);
}  
void display1(int stu[],int number,float &total){

   
   for (int i = 0; i < number; i++)
   {
      total = total + stu[i];
   }
   
   cout << "Number of Votes : "<< total << " = " << (total/500)*100 << "%" <<endl;
   cout << "Number of not Votes : "<< 500 - total <<" = " << ((500 - total)/500)*100 << "%" <<endl;
}

void display2(int stu[],int number,float total){
   
   int n=1;
   int e;
   
   cout <<endl;
   cout << "Result of election chairman" <<endl;
   cout << "---------------------------" << endl;
   cout << "No" << "      " << "Votes" << "    " << "Percent(%)" <<endl;
   cout << "---------------------------" << endl;
   
      for (int i = 0; i < number; i++)
      {
        cout << n;
        cout << setw(11) << stu[i];
        cout << setw(10) << setprecision(3) << float(stu[i]/total)*100 <<endl;
        n++;
      }
      e = total;
   cout << "---------------------------" << endl;
   cout << "Total" << "    " << e << "    " << "100.00" <<endl;
}


   
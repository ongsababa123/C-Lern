#include <iostream>
#include <iomanip>
#include <time.h>
#include <cstring>

using namespace std;

void getdata(string idnum[],string idname[], float score1[], float score2[], float score3[]);
void average(float score1[], float score2[], float score3[],float &total[]);


int main()
{
   string idnum[20];
   string idname[20];
   float score1[20];
   float score2[20];
   float score3[20];
   float total[20];

   getdata(idnum,idname,score1,score2,score3);
}

void getdata(string idnum[],string idname[], float score1[], float score2[], float score3[])
{

   string id,name;
   float score;
   int n = 1;

   for (int i = 0; i < 20; i++)
   {

      system("cls");

      do
      {

         cout << "Enter ID Student No [" << n << "] (5 characters) : ";
         cin >> id;
         cout << id.size() << endl;
         if (id.size() > 5 || id.size() < 5)
         {
            cout << "!!!!!Enter ID agin!!!!!" << endl;
         }

      } while (id.size() > 5 || id.size() < 5);
      idnum[i] = id;

       do
      {

         cout << "Enter Name Student No [" << n << "] (20 characters) : ";
         cin >> name;
         cout << name.size() << endl;
         if (name.size() > 20)
         {
            cout << "!!!!!Enter ID agin!!!!!" << endl;
         }

      } while (name.size() > 20);
      idname[i] = name;
/*------------------------------------------------------------------------------------*/
      do
      {

         cout << "Enter Score 1 student [" << n << "] (max 100 score) : ";
         cin >> score;
        
         if (score > 100)
         {
            cout << "!!!!!Enter ID agin!!!!!" << endl;
         }

      } while (score > 100);
      score1[i] = score;
/*---------------------------------------------------------------------------------*/
       do
      {

         cout << "Enter Score 2 student [" << n << "] (max 100 score) : ";
         cin >> score;
        
         if (score > 100)
         {
            cout << "!!!!!Enter ID agin!!!!!" << endl;
         }

      } while (score > 100);
      score2[i] = score;
/*---------------------------------------------------------------------------------------*/
       do
      {

         cout << "Enter Score 3 student [" << n << "] (max 100 score) : ";
         cin >> score;
        
         if (score > 100)
         {
            cout << "!!!!!Enter ID agin!!!!!" << endl;
         }

      } while (score > 100);
      score3[i] = score;

      n++;
   }
}

void average(float score1[], float score2[], float score3[],float &total[]){
      
      float total[20];

      for (int i = 0; i < 20; i++)
      {
         total[i] = score1[i] + score2[i] + score3[i];
      }
}
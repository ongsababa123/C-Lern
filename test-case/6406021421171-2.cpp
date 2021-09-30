//บ่อปลา มหาสนุก//
#include <iostream>

using namespace std;

int main(){

      int area = 100000;
      int money,celemicsize=0;
      int number_celemics,sumpay_celemics,pricetank;
      int n = 0;

      cout<<" Please enter your money to build : "; cin>>money;

      do{
        cout<<" Please select celemic size : "; cin>>celemicsize;
        cout<<""<<endl;
      switch (celemicsize){
            case 100 :
                 n = 1;
                 number_celemics = area/100;
                 sumpay_celemics = number_celemics*(3+10);
                break;
                
            case 225 :
                 n = 1;
                 number_celemics = area/225;
                 sumpay_celemics = number_celemics*(5+15);
                break;
            
            case 400 :
                 n = 1;
                 number_celemics = area/400;
                 sumpay_celemics = number_celemics*(40+6);
                break;
            
            case 625 :
                 n = 1;
                 number_celemics = area/625;
                 sumpay_celemics = number_celemics*(50+8);
                break;
            
            case 900 :
                 n = 1;
                 number_celemics = area/900;
                 sumpay_celemics = number_celemics*(75+10);
                break;

            
            default:
                cout<<" plese enter agin "<<endl;
            }
      }while (n == 0);
                 money = money - sumpay_celemics;

                 cout<<" Number of celemic pieces : "<< number_celemics <<endl;
                 cout<<" Total price for celemic : "<< sumpay_celemics <<endl;
                 cout<<" Your money after pay for celemic only : "<< money <<endl;

        int tanksize = money/178;

        if (tanksize >= 65){
            pricetank = tanksize*(48+130);
        }
        else if (tanksize >= 37){
            pricetank = tanksize*(56+140);
        }
        else if (tanksize >= 17){
            pricetank = tanksize*(64+145);
        }
        else if (tanksize >= 4){
            pricetank = tanksize*(72+150);
        }
        else {
            pricetank = 0;
        }
          money = money - pricetank;

          cout<<" Your build tank fish size: : "<<tanksize<<endl;
          cout<<" Your money after pay for celemic and fish tank : "<<money<<endl;

      return 0;
}
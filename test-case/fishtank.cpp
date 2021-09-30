//บ่อปลา มหาสนุก//
#include <iostream>
#include <typeinfo>
#include <limits>
#include <vector>

using namespace std;


int main(){

      int area = 100000;
      int celemicsize=0;
      int money;
      int number_celemics,sumpay_celemics,pricetank;
      int n = 0;

      using std::string; 
      using std::vector;
      using std::cout; 
      using std::endl;
      using std::cin; 
      using std::numeric_limits;
      
    do{
       do{
         while (true) { 
          cout<< money <<" Please enter your money to build : ";
          if (cin >> money) {
            break;
        } else {
            cout << "----------value not enter agin---------\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
         }
         }
      }while (false);
      
      

      do{
          do{
              while (true) { 
        cout<<endl;
        cout<<" celemic size 100sq.cm"<<endl;
        cout<<" celemic size 225sq.cm"<<endl;
        cout<<" celemic size 400sq.cm"<<endl;
        cout<<" celemic size 625sq.cm"<<endl;
        cout<<" celemic size 900sq.cm"<<endl;
        cout<<endl;
        cout<<" Please select celemic size : "; /*cin>>celemicsize;*/ 
        if (cin >> celemicsize) {
            break;
        }else {
            cout<<endl;
            cout << "----------value not enter celemic size agin---------\n";
            cin.clear();
            cin.ignore(numeric_limits<std::streamsize>::max(), '\n');
        }
         }
      }while (false);

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
                n = 0;
                cout<<"----------plese enter celemics size agin----------"<<endl;
                cout<<endl;
            }
    
            
      }while (n == 0);
      
      if(money < sumpay_celemics){
      cout<<"----------money low plese enter money agin----------"<<endl;
      cout<<endl;
      }
     
    }while(money < sumpay_celemics);
      
    
                
                 money = money - sumpay_celemics;

                 cout<<" Number of celemic pieces : "<< number_celemics <<endl;
                 cout<<" Total price for celemic : "<< sumpay_celemics <<endl;
                 cout<<" Your money after pay for celemic only : "<< money <<endl;

        int tanksize = money/178;

        do{
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
        else if (tanksize < 4){
            pricetank = 0;
            tanksize = 0;
        }
        if (pricetank > money){
            tanksize--;
        }
        }while(pricetank > money);

          money = money - pricetank;

          cout<<" Your build tank fish size: : "<<tanksize<<endl;
          cout<<" Your money after pay for celemic and fish tank : "<<money<<endl;
      
      return 0;
} 
//สส//
#include <iostream>
using namespace std;


int main(){
        int answer=42,number,r=0,r1=99; 
        int n=1;
        /*cout << " Enter answer : "; cin>>answer;*/
        
        do{
            cout << " Enter Integer Number " << r << " - " << r1 << " : "; cin>>number; 
            if(number > answer){
              cout << " Number " << number << " is not Match Number is correct Less Than " << number << endl;
              r1 = number-1;
              n++;
            }
            if(number < answer){
              cout << " Number " << number << " is not Match Number is correct More Than " << number << endl;
              r = number+1;
              n++;
            }
            else if(number == answer){
                cout << " Number " << number << " is Match " <<endl;
                cout << " You use play " << n << " cout. " << endl;
            }
        }while(answer != number);

      return 0;
} 
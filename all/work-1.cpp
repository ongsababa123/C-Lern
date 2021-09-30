#include<stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
        int menu;
        int A=1,B=2;  
        int numA[100],ia=0,counta=0,ja=0;
        int numB[100],ib=0,countb=0,jb=0;
do{
        cout <<endl;
        cout << " Enter Number Menu : "; cin>>menu;
        cout <<endl;

        switch(menu){
               case 1 :
                        cout<<"Set A"<<endl;
                        cout<<"***Enter number 0 to stop***"<<endl;
                        while(A=1){
                                cout<<"Enter Number A : ";
                                cin>>numA[ia];
                                if(numA[ia]==0){
                                        counta= counta-1;
                                        break;
                                }
                                ia++; counta++;
                        }
                        ///////////////////////
                        cout<<"(";
                        for(ja=0;ja<=counta;ja++){	
                        cout << numA[ja] << "," ;	
                        }
                        cout<<")";
                        break;
                        
                case 2 :
                        cout<<"Set B"<<endl;
                        cout<<"***Enter number 0 to stop***"<<endl;
                        while(B=1){
                                cout<<"Enter Number A : ";
                                cin>>numB[ib];
                                
                        }
                        ///////////////////////
                        cout<<"(";
                        for(jb=0;jb<=countb;jb++){	
                        cout << numB[jb] << "," ;	
                        }
                        cout<<")";
                        break;
                case 5 :
                        cout << "****Exit Program****"<<endl;
                        break;

                default :
                cout << "****Enter Retry****"<<endl;
        }
}while(menu != 5);

        return(0);  
}
       
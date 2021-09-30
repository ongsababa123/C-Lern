//สส//
#include <iostream>


using namespace std;


int main(){
    int vote,number1=0,number2=0,member;
    string name1,name2;
do{
      cout<<" Enter Member : "; cin>>member;
      cout<<endl;

      if(member > 437){
          cout<<"-----Enter Member agin-----"<<endl;
      }
}while(member > 437);
    
    if(member < 218){
    cout<<" error "<<endl;
      return 0;  
    }

    int win = (member/2)+1;

    cout<<" Enter Chancellor Name 1 : " ; cin>>name1;
    cout<<" Enter Chancellor Name 2 : " ; cin>>name2;
    cout<<endl;

    cout<< " Vote Chancellor " << endl;
    cout<< " Vote : " << name1 << " : number 1 " << endl;
    cout<< " Vote : " << name2 << " : number 2 " << endl;
    cout<< " Not Vote number 3 " << endl;
do{
  for(int i = 1; i <= member;){ 
  do{
      
      cout<<" Member "<< i << " Enter vote Chancellor : "; cin>>vote;
      i++;
    switch(vote){
        case 1:
            number1++;
            vote = 0;
            if (number1 == win)
            {
                cout<<" Chancellor 1 : "<< name1 << " : win "<< endl;
                return 0;
            }
            
        break;

        case 2:
            number2++;
            vote = 0;
             if (number2 == win)
            {
                cout<<" Chancellor 2 : "<< name2 << " : win "<< endl;
                return 0;
            }
        break;

        case 3:
            vote = 0;
            cout<<" You Not Vote "<< endl;
        break;

    default:
        cout<< "-----Enter Vote agin-----"<< endl;
    }


    
  }while(vote != 0);
  }
    if(number1 == number2){
        cout<<"----------!!!Vote is always!!!----------"<<endl;
        cout<<" Score Vote : " << name1 << " = " << number1 << endl;
        cout<<" Score Vote : " << name2 << " = " << number2 << endl;
        cout<<"----------!!!Vote is always!!!----------"<<endl;
        cout<<"----------Return Vote Chancellor Agin----------" <<endl;
    }
}while (number1 == number2);


      return 0;
} 
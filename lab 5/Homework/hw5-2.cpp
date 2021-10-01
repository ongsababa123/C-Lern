#include<iostream>


using namespace std;

void chart(int value);

int main(){

    int value1,value2,value3,value4,value5;
    
          cout<<" Enter Five Number : ";
          cin >>value1>>value2>>value3>>value4>>value5;
         
            chart(value1); 
            chart(value2);  
            chart(value3); 
            chart(value4); 
            chart(value5); 
return 0;
}

void chart(int value){
        cout << value;
        cout<<" : "; 
        for(int i=1; i<=value; i++){
            cout<<"*";
        }
        cout <<endl;
    }
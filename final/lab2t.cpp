#include <iostream>

using namespace std;

int main()
{
    int number;
    int sum = 0;
    int ss=0;

    do{
    cout << "Input number of group :"; cin>>number;
    if (number > 20)
    {
        cout<<"Out of range! Program terminated"<<endl;
    }
    
    }while(number > 20);

    for (int i = 1; i < number+1; i++)
    {
        cout << endl;
        
        
        cout << "Groups" << i <<" ";
        sum = i;
        for (int n = 0; n < 100/number+1; n++)
        {   
           while (sum <= 100)
           {
                 cout << sum << " ";
                 sum = sum + number;
           }
          
            
        }
        
    }
    

    return (0);
    }
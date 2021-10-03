#include <iostream>
using namespace std;

bool CheckPrime (int num){
    int num_Cal1 = 0, num_Cal2 = 0, num_Cal3 = 0;
    num_Cal1 = num % 2;
    num_Cal2 = num % num;
    num_Cal3 = num % 1;

    if((num_Cal1 == 1)&&(num_Cal2 == 0)&&(num_Cal3 == 0)){
        return true;
    }else{
        return false;
    }
}



int main()
{
    int num = 0;
    
    cout << "Enter your number : ";
    cin >> num;
    (CheckPrime(num) == true)? cout << "Number is prime number" :cout << "Number is not prime number";
    
return(0);
}
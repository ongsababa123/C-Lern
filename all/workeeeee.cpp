#include<stdio.h>
#include <iostream>
#include <iomanip>
using namespace std;

int main(){
        int A[8]={3,4,2,2,5,3,4,4};
        int B[8],nb=0;

for(int c=0;c<8;c++)

{

    int temp=A[c],have=0;

    for(int d=c+1;d<8;d++)

    {

        if(A[c]==A[d])have=1;

    }

    if(have==0)B[nb++]=A[c];

}

        return(0);  
}
       
//6406021421171-2 Sec B จิลายุทธ บัณฑิต//
#include <iostream>

using namespace std;

int main(){
    int B=120,T=80,M=50,S=15,Money=1000;
    int Bn,Tn,Mn,Sn;
        cout << "Enter number of Book : "; cin>>Bn;
        cout << "Enter number of Toys : "; cin>>Tn;
        cout << "Enter number of Model : "; cin>>Mn;
        cout << "Enter number of Stationery : "; cin>>Sn;
    Bn = Bn*B;
    Tn = Tn*T;
    Mn = Mn*M;
    Sn = Sn*S;
    float sum = Bn+Tn+Mn+Sn;
    float pay;

    if(sum >=100000){
        float pay = (sum*10/100)+Money;
        cout << "Paymet = " << pay <<endl;
        return 0;
    }
    else if(sum >=10000){
        pay = (sum*5/100)+Money;
        cout << "Paymet = " << pay <<endl;
        return 0;
    }
    else if(sum >=5000){
        cout << "Paymet = " << pay <<endl;
        return 0;
    }
    else if(sum >=1){
        pay = (Money-(Money*10/100));
        cout << "Paymet = " << pay <<endl;
        return 0;
    }
    else if(sum >=0){
        pay = (Money-(Money*50/100));
        cout << "Paymet = " << pay <<endl;
        return 0;
    }
    
      return 0;
}
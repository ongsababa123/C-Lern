#include<iostream>
using namespace std;

int main(){
	int money=0,moneyRemain=0;
	int remain = 0,day=1;
	cout << "Mom give nuDee money : ";cin >> money;
	for(int i = 1;i<=money;i++){
		if(i == 1){
			remain = money;
		}
		remain -= i + 1;
		if(remain > i){
			day++;
		}else if(remain > 0){
			moneyRemain = remain;
		}
	}
	cout << "NuDee spend " << day+1 << " Day" << endl;
	cout << "money remain " << moneyRemain << " Bath" <<endl;
}


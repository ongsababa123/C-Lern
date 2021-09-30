#include<iostream>
#include<cstring>
using namespace std;

int main(){
	int area=0;
	bool flag = true,infinity = true;
	char quality;
	int bill=0;
	char size;
	//string status;
	cout << "Enter the area : "; cin >> area;
	//cout << "Enter the type of the material : "; cin >> quality;
	if(area >= 20 && area <= 40){
		size = 'a';
		bill = 200000;
	}else if(area >= 41 && area <= 100){
		size = 'b';
		bill = 200000+((area-40)*3000);
	}else if(area > 100){
		size = 'c';
		bill = 200000+150000+((area - 60)*2000);
		cout << bill;
	}else{
		flag = false;
		/*if(area >= 40){
			bill += 200000;
		}		
		if(area - 40 != 0){
			bill += 150000;
		}
		bill += (60-area)*2000;*/
		//bill = 200000+150000+((area - 60)*2000);
	}
	cout << "Enter the type of the material : "; cin >> quality;
	if(quality == 'B' || quality == 'b'){
		if(size == 'a'){
			bill += area * 5000;
		}
		if(size == 'b'){
			bill +=  area * 7500;
		}
		if(size == 'c'){
			bill += area * 15000;
		}
	}else if(quality == 'G' || quality == 'g'){
		if(size == 'a'){
			flag = false;
		}
		if(size == 'b'){
			bill += area * 10000;
		}
		if(size == 'c'){
			bill += area * 20000;
		}
	}else if(quality == 'P' || quality == 'p'){
		if(size == 'a'){
			flag = false;
		}
		if(size == 'b'){
			flag = false;
		}
		if(size == 'c'){
			bill += area * 15000;
		}
    }else{
    	flag = false;
	}
	/*if(quality == 'B' || quality == 'G' || quality == 'P'){
		cout << "The house will cost " << bill << " baht to build.";
	}else{
		flag = false;
	}*/
	if(flag == false){
		cout << "Eror";
		while(infinity == true);
	}

	if(quality == 'B' || quality == 'G' || quality == 'P'|| quality == 'b' || quality == 'g' || quality == 'p'){
		cout << "The house will cost " << bill << " baht to build.";
	}
}

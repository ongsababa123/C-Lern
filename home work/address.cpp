#include<iostream>
#include<cstring>
using namespace std;


bool isValidNumber(int &address){
	if((address >= 1 && address <= 223)){
		return 1;
	}else return 0;
}

char addressClass(int address,string &numNet,string &numIP){
	char ipClass;
	if(address >= 1 && address <= 127){
		ipClass = 'A';
		numNet = "127";
		numIP = "16777214";
	}else if(address >= 128 && address <= 191){
		ipClass = 'B';
		numNet = "16384";
		numIP = "65,536";
	}
	else if(address >= 192 && address <= 223){
		ipClass = 'C';
		numNet = "2097152 ";
		numIP = "256";
	}
	return ipClass;
}

int main(){
	int address;
	string numNet,numIP;
	cout <<endl;
	cout << "Please enter the first digit: ";
	cin >> address;
	if (!isValidNumber(address)){
		cout << "It is an invalid address." << endl;
	}else{
		cout << "The class is "
		<< addressClass(address, numNet,numIP)<< endl;
		cout << "The number of networks " << numNet << endl;
		cout << "The number of IP addresses " << numIP << endl;
	}
}
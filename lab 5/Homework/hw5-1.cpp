#include<iostream>
#include<cmath>
using namespace std;

float calSin(float x);
float caltan(float x);
float calLog(float x);


int main(){
	float x,result,result1,result2;
	cout << "Enter X : ";
	cin >> x;
	result = calSin(x);
	result1 = caltan(x);
	result2 = calLog(x);
	cout << "============================="<<endl;
	cout << "Result of sinx^2 *cosx^2 is ";
	cout << result << endl;
	cout << "============================="<<endl;
	cout << "Result of 1/2*sqrt(cos(tan(x))) is ";
	cout << result1 << endl;
	cout << "============================="<<endl;
	cout << "Result of (log((x*x)/1-x))/pow(x,5+x) is ";
	cout << result2 << endl;	
	cout << "============================="<<endl;
}

float calSin(float x){
	float result;
	result = (sin(x)*sin(x))*(cos(x)*cos(x));
	return result;
}

float caltan(float x){
	float result;
	result = 1/2*sqrt(tan(cos(x)));
	return result;
}

float calLog(float x){
	float result;
	result = (log((x*x)/1-x))/pow(x,5+x);
    return(result);
}
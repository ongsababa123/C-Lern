#include<iostream>
using namespace std;

int main(){
	float hour,minute,second,kiloStart,kiloEnd;
	float distance,sumSec,sumMinute,timeTotal,distanceAver;
	cout << "Data input are integer!." << endl;
	cout << "Enter start kilomater : ";
	cin >> kiloStart;
	cout << "Enter End kilomater : ";
	cin >> kiloEnd;
	distance = kiloEnd - kiloStart;
	cout << "Enter time use(Hour Minute Second) : ";
	cin >> hour >> minute >> second;
	cout << endl;
	sumSec = ((second/60)/60);
	sumMinute = minute/60;
	timeTotal = hour + sumMinute + sumSec;
	distanceAver = distance / timeTotal;
	cout << "Car traveled " << distance << " kilometers in " <<  hour << " hrs " << minute << " min " << second << " sec." << endl;
	cout << "Average velocity was " << distanceAver << " kph" << endl;
}
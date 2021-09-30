#include<iostream>
using namespace std;

int main(){
	int N;
	int number;
	int min,max;
	float averg;
	cout << "Enter N = "; cin >> N;
	for(int i=1;i <= N;i++){
		cout << "#" << i << ": ";cin >> number;//cout << "\n";
		if(i == 1){
			min = number;
			max = number;
		}
		if(min > number){
			min = number;
		}
		if(max < number){
			max = number;
		}
		averg += (float)number;
	}
	cout << "Maximum = " << max << endl;
	cout << "Minimum = " << min << endl;
	cout << "Mean = " << averg/N << endl;
}

#include<iostream>
#include<cstring>
#include<conio.h>
using namespace std;

bool palinD(char input[],char index);

int main(){
	bool flg = 0;
	char length,index;
	char input[]={};
	while(flg == 0){
		cout << "Enter text : ";
		cin >> input;
		length = strlen(input);
		index = length - 1;
		if(palinD(input,index)){
			cout << "Your text is Palindrome"<< endl;
		}else cout << "Your text is not Palindrome" << endl;
		cout << "\nPress any key to continue";
		getch();
		system("cls");
	}

	
}

bool palinD(char input[],char index){
	bool flag = false;
	for(int i = 0; i < index;i++){
		cout << input[i] << endl;

		if(input[i] != input[index-i]){
			return flag;
			break;
		}else flag = true;
	}
	return flag;
}

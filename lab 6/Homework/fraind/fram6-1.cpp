#include <iostream>
#include <string.h>
using namespace std;

bool chk(char ch[],int length,int i ,int i2);

int main(){
	char ch[20];
	int i=0,i2=0,length;
	cout<<"Enter text : ";
	cin>>ch;
	length = strlen(ch);
	cout<<endl;
	chk(ch,length,i,i2);
	return 0;
}

bool chk(char ch[],int length,int i ,int i2){
	
	for(int i=length-1;i<length;i--){
		cout<<ch[i2]<<" : ";
		cout<<ch[i]<<endl;
		
		if(ch[i2]!=ch[i]){
			cout<<endl<<"Your text is not Palindrome.";
			return false; break; 
		}
		
		if(i==0){
			cout<<endl<<"Your text is Palindrome.";
			return true; break; 
		}
		i2++;
	}
}

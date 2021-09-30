#include<iostream>
using namespace std;

int main(){
	int round;
	int player1,player2;
	float count1=0,count2=0;
	bool flag = true;
	cout << "What round do you need to play? ";cin >> round;
	do{
		cout << "1.) is Hammer" << endl;
		cout << "2.) is Scissors" << endl;
		cout << "3.) is Paper" << endl;
		cout << "Player 1 : ";cin >> player1;
		cout << "Player 2 : ";cin >> player2;
	if(player1 == 1 && player2 == 1){
		cout << "Deal" << endl;
		cout << "************************" << endl;
	}
	if(player1 == 1 && player2 == 2){
		cout << "Player 1 wins!!" << endl;
		cout << "************************" << endl;
		count1++;
	}
	if(player1 == 1 && player2 == 3){
		cout << "Player 2 wins!!" << endl;
		cout << "************************" << endl;
		count2++;
	}
	//---------------------------------------------------------------------------------
	if(player1 == 2 && player2 == 1){
		cout << "Player 2 wins!!" << endl;
		cout << "************************" << endl;
		count2++;
	}
	if(player1 == 2 && player2 == 2){
		cout << "Deal" << endl;
		cout << "************************" << endl;
	}
	if(player1 == 2 && player2 == 3){
		cout << "Player 1 wins!!" << endl;
		cout << "************************" << endl;
		count1++;
	}
	//----------------------------------------------------------------------------------
	if(player1 == 3 && player2 == 1){
		cout << "Player 1 wins!!" << endl;
		cout << "************************" << endl;
		count1++;
	}
	if(player1 == 3 && player2 == 2){
		cout << "Player 2 wins!!" << endl;
		cout << "************************" << endl;
		count2++;
	}
	if(player1 == 3 && player2 == 3){
		cout << "Deal" << endl;
		cout << "************************" << endl;
	}
	cout << "Player 1 : " << count1 << " win" << " and Player 2 : " << count2  <<" win"<< endl;
	//round--;
	/*if(round == 0){
		flag = false;
	}*/
		if(count1/round >= 0.7){
			cout << "***Player 1 win!!!***";
			flag = false;
		}else if(count2/round >= 0.7){
			cout << "***Player 2 win!!!***";
			flag = false;
		}
	}while(flag == true);
	
}

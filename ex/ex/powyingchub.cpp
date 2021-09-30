#include<iostream>
using namespace std;

int main(){
	int player1,player2;
	cout << "1.) is Hammer" << endl;
	cout << "2.) is Scissors" << endl;
	cout << "3.) is Paper" << endl;
	cout << "Player 1 : ";cin >> player1;
	cout << "Player 2 : ";cin >> player2;
	if(player1 == 1 && player2 == 1){
		cout << "Deal";
	}
	if(player1 == 1 && player2 == 2){
		cout << "Player 1 wins!!";
	}
	if(player1 == 1 && player2 == 3){
		cout << "Player 2 wins!!";
	}
	//---------------------------------------------------------------------------------
	if(player1 == 2 && player2 == 1){
		cout << "Player 1 wins!!";
	}
	if(player1 == 2 && player2 == 2){
		cout << "Deal";
	}
	if(player1 == 2 && player2 == 3){
		cout << "Player 2 wins!!";
	}
	//----------------------------------------------------------------------------------
	if(player1 == 3 && player2 == 1){
		cout << "Player 1 wins!!";
	}
	if(player1 == 3 && player2 == 2){
		cout << "Player 2 wins!!";
	}
	if(player1 == 3 && player2 == 3){
		cout << "Deal";
	}
}

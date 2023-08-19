#include <iostream>
#include"dec.h"
using namespace std;

string board[9] = { " ", " ", " ", " ", " ", " ", " ", " ", " " };
int player = 1;
int position = 0; //0-9 position
void introduction() {
	cout << "press [enter] or something to begin";
	getchar(); //haults the screen or lets just say takes an input
	cout << "\n";

	cout << "\n";
	cout << "\t*******";
	cout << "\t   Tictactoe" << endl;
	cout << "\t*******"<<endl;
	cout << "Player-1 turn...X" << endl;
	cout << "Player-2 turn...Y" << endl;

	cout << "The 3X3 grid is down below\n"<<endl;

	cout<< ""

}

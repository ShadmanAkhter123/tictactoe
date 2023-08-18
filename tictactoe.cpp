// tictactoe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

#include <iostream>
using namespace std;

char box[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
char turn = 'X';
int row, column;
bool  draw=false;

void board() {
	system("cls");
	cout << "\t\t" << box[0][0] << " | " << box[0][1] << " | " << box[0][2] << endl;
	cout << "\t\t" << "--" << "|" << "--" << " |" << "--" << endl;
	cout << "\t\t" << box[1][0] << " | " << box[1][1] << " | " << box[1][2] << endl;
	cout << "\t\t" << "--" << "|" << "--" << " |" << "--" << endl;
	cout << "\t\t" << box[2][0] << " | " << box[2][1] << " | " << box[2][2] << endl;
}

void choose() {
	int choice;
	if (turn == 'X') {
		cout << "player X turn: ";
		cin >> choice;
	}
	if (turn == 'Y') {
		cout << "player Y turn: ";
		cin >> choice;
	}
	switch (choice) {
	case 1:
		row = 0; column = 0; break;
	case 2:
		row = 0; column = 1; break;
	case 3:
		row = 0; column = 2; break;
	case 4:
		row = 1; column = 0; break;
	case 5:
		row = 1; column = 1; break;
	case 6:
		row = 1; column = 2; break;
	case 7:
		row = 2; column = 0; break;
	case 8:
		row = 2; column=1; break;
	case 9:
		row = 2; column = 2; break;
	default:
		cout << "invalid number";
		break;
	}
	if (turn == 'X' && box[row][column] != 'X' && box[row][column] != 'Y') {
		box[row][column] = 'X';
		turn = 'Y';
	}
	else if (turn == 'Y' && box[row][column] != 'X' && box[row][column] != 'Y') {
		box[row][column] = 'Y';
		turn = 'X';
	}
	else {
		cout << "please select another number";
		choose();
	}
	board();
}
bool game() {
	

		for (int i = 0; i < 3; i++) {
			if (box[0][i] == box[1][i] && box[0][i] == box[2][i] || box[i][0] == box[i][1] && box[i][0] == box[i][2]) {
				return false;
			}
		}
		if (box[0][0] == box[1][1] && box[0][0] == box[2][2] || box[0][2] == box[1][1] && box[0][2] == box[2][0]) {
			return false;
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (box[i][j] != 'X' && box[i][j] != 'Y') {
					
					return true;
				}
			}
		}
		if (draw == true) {
			return false;
		}
		
		
	}
		

int main()
{
	while (game()) {
		board();
		choose();
		

	}
	if (turn == 'X' && draw == false) {
		cout << "player 2[Y] WINS!!!" << endl;
	}
	else if (turn == 'Y' && draw == false) {
		cout << "player 1[X] WINS!!!" << endl;
	}
	else {
		cout << "GAME DRAW!!" << endl;
	}
	return 0;
	
}
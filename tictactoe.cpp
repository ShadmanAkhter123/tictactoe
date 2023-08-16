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

void board() {
	cout << "\t\t" << box[0][0] << " | " << box[0][1] << " | " << box[0][2] << endl;
	cout << "\t\t" << "--" << "|" << "--" << " |" << "--" << endl;
	cout << "\t\t" << box[1][0] << " | " << box[1][1] << " | " << box[1][2] << endl;
	cout << "\t\t" << "--" << "|" << "--" << " |" << "--" << endl;
	cout << "\t\t" << box[2][0] << " | " << box[2][1] << " | " << box[2][2] << endl;
}

void choose(int choice) {

	switch (choice) {
	case 1:
		box[0][0] = 'X'; break;
	case 2:
		box[0][1] = 'X'; break;
	case 3:
		box[0][2] = 'X'; break;
	case 4:
		box[1][0] = 'X'; break;
	case 5:
		box[1][1] = 'X'; break;
	case 6:
		box[1][2] = 'X'; break;
	case 7:
		box[2][0] = 'X'; break;
	case 8:
		box[2][1] = 'X'; break;
	case 9:
		box[2][2] = 'X'; break;
	default:
		cout << "invalid number";
		break;
	}
	board();
}
bool game() {
	int i, j;
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			if (i == j && box[i][j] == 'X') {
				return false;
			}
			else {
				choose();
			}
		}
	}
}

int main()
{
	int choice,choice2;


	board();
	cout << "player[x] turn:";
	cin >> choice;
	choose(choice);
	cout << "player[o] turn:";
	cin >> choice2;
	choose2(choice2);

	return 0;
	
}
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
	cout << "\t*******" << endl;
	cout << "Player-1 turn...X" << endl;
	cout << "Player-2 turn...Y" << endl;

	cout << "The 3X3 grid is down below\n" << endl;

	cout << "     |     |      \n";
	cout << "  1  |  2  |  3   \n";
	cout << "_____|_____|_____ \n";
	cout << "     |     |      \n";
	cout << "  4  |  5  |  6   \n";
	cout << "_____|_____|_____ \n";
	cout << "     |     |      \n";
	cout << "  7  |  8  |  9   \n";
	cout << "     |     |      \n\n";


	bool is_winner()
	{
		//checking the rows 
		bool winner = false;
		if ((board[0] == board[1]) && (board[1] == board[2]) && (board[0] != " ")) {
			winner = true;
		}
		else if ((board[3] == board[4]) && (board[4] == board[5]) && (board[3] != " ")) {
			winner = true;
		}
		else if ((board[3] == board[4]) && (board[4] == board[5]) && (board[3] != " ")) {
			winner = true;
		}

		//checking the columns
		else if ((board[0] == board[3]) && (board[3] == board[6]) && (board[0] != " ")) {
			winner = true;
		}
		else if ((board[1] == board[4]) && (board[4] == board[7]) && (board[1] != " ")) {
			winner = true;
		}
		else if ((board[2] == board[5]) && (board[5]) == (board[7]) && (board[2] != " ") {
			winner = true;

		}


		//checking the diagonals
		else if ((board[0] == board[4]) && (board[4]) == (board[8]) && (board[0] != " ") {
			winner = true;

		}
		else if ((board[2] == board[4]) && (board[4]) == (board[6]) && (board[2] != " ") {
			winner = true;

		}

		return winner;
	}
	bool filled_up() {
		bool filled = true;
			for (i = 0; i < 9; i++) {
				if (board[i] == " ") {
					filled = false;
				}
			}
		return 0;
	}
	void draw() {
		cout << "     |     |      \n";
		cout << "  " << board[0] << "  |" << "  " << board[1] << "  |" << "  " << board[2] << "\n";
		cout << "     |     |      \n";
		cout << "  " << board[3] << "  |" << "  " << board[4] << "  |" << "  " << board[5] << "\n";
		cout << "     |     |      \n";
		cout << "  " << board[6] << "  |" << "  " << board[7] << "  |" << "  " << board[8] << "\n";
		cout << "\n";
	}

	void set_position()
	{
		cout << "player's" << player << " enter(1:9)";
		while (!(cin >> position)) //while not interger....counter for if anyone inputs something other than integer value
		 {
			cout << "please enter a valid number between 1 to 9"<<endl;
			cin.clear(); //will clear the input from variable...by net, error flag will be removed
			cin.ignore(); //will
			//together they solve the problem of it running infinitely 
		}
		while (board[position - 1] != " ")	//while position not space....if the position is not blank 
		{
			cout << "Oops, that position is already filled\nTry again \n";
			cout << "Player " << player << "'s turn(enter 1-9): ";
			cin >> position;
			cout << "\n";

		}
	}
	void upload_board() 
	{
		if (player % 2 == 1) //player number determiner....1 mod 2....for integer there can be no decimal number so, if you are to divide 2 by 1...it has to be 2*0=0...1-0 equals to 1 
		{
			board[position - 1] = 'X'; //google for more
		}
		else {
			board[position - 1] = 'O';
		}
	}
	void change_player()
	{
		if (player == 1) {
			player++;
		}
		else
		{
			player--;
		}
	}
	void take_turn() {
		if (!is_winner() && !filled_up())
		{
			set_position();
			update_board();
			change_player();
			draw();
		}
	}
	void end_game()
	{
		if (is_winner())
		{
			cout << "There is a winner!" << endl;
		}
		else if (filled_up())
		{
			cout << "There is a tie" << endl;
		}
	}
		
}

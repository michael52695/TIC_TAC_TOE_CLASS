#include "board.h"
#include <iostream>
#include<cstdlib>
using namespace std;


board::board()
{
    //ctor
}

board::~board()
{
    //dtor
}


void board::initialize()
{
        int i=0;
        for(i=0; i<10; i++)
        box[i]='0'+i;

}


void board::update(int move , char icon)
{

        char mark;
        //mark='x';


        mark=icon;
        system("cls");
        if (move == 1 && box[1] == '1')
			{box[1]= mark;}
		else if (move == 2 && box[2] == '2')
			{box[2] = mark;}
		else if (move == 3 && box[3] == '3')
			{box[3] = mark;}
		else if (move == 4 && box[4] == '4')
			{box[4] = mark;}
		else if (move == 5 && box[5] == '5')
			{box[5] = mark;}
		else if (move == 6 && box[6] == '6')
			{box[6] = mark;}
		else if (move == 7 && box[7] == '7')
			{box[7] = mark;}
		else if (move == 8 && box[8] == '8')
			{box[8] = mark;}
		else if (move == 9 && box[9] == '9')
			{box[9] = mark;}


        //cout<<mark;


		    }



void board::render()
{
    cout << "\n\n\tTic Tac Toe\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	cout << "     |     |     " << endl;
	cout << "  " << box[1] << "  |  " << box[2] << "  |  " << box[3] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << box[4] << "  |  " << box[5] << "  |  " << box[6] << endl;
	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;
	cout << "  " << box[7] << "  |  " << box[8] << "  |  " << box[9] << endl;
	cout << "     |     |     " << endl << endl;
}



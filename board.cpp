#include <iostream>
#include "board.h"

using namespace std;

int Board::searchChoice()
{
    for(int row = 0; row < 3; ++row)
    {
        for(int col = 0; col < 3; ++col)
        {
          //valid choice
            if(board[row][col] == playerChoice)
            {
                char *selection = &board[row][col];
                break;
            }
        }
    }
}


void Board::updateDisplay(char *selection, char playerChar)
{

}


void Board::display(char board[3][3])
{
    cout << "     |     |     \n  ";
    cout << board[0][0] << "  |  " << board[0][1] << "  |  " << board[0][2] << "  \n";
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     \n  ";
    cout << board[1][0] << "  |  " << board[1][1] << "  |  " << board[1][2] << "  \n";
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     \n  ";
    cout << board[2][0] << "  |  " << board[2][1] << "  |  " << board[2][2] << "  \n";
    cout << "     |     |     " << endl;
}

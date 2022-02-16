#include <iostream>
#include <algorithm>
#include "board.h"


using namespace std;

//searches for player number selection and if available, returns array location
char* Board::searchChoice(char c)
{
    playerChoice = c;

    for(int row = 0; row < 3; ++row)
    {
        for(int col = 0; col < 3; ++col)
        {
          //valid choice
            if(board[row][col] == playerChoice)
            {
                return &board[row][col];
                break;
            }
        }
    }
  //return to main program
  //ADD ERROR CASE
    return NULL;
}    


void Board::updateDisplay(char *selection, char playerChar)
{
    *selection = playerChar;
}


void Board::display()
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

bool Board::winCheck()
{
  //check corners
    return *corners;

//    count()
}

//void Board::setCorners()
//{
//    **corners[][] = 
//}
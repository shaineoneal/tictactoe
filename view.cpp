#include <stdio.h>
#include <iostream>
#include <iomanip>
#include "view.h"

using namespace std;

//prints game board

char searchChoice(int choice, char board[3][3])
{
    for(int row = 0; row < 3; ++row)
    {
        for(int col = 0; col < 3; ++col)
        {
          //valid choice
            if(board[row][col] == choice)
            {
                break;
            }
        }
    }
}

char validChoice ();



/* if turn is greater than 6, begin evaluating after every turn
*on turn, count number of player1's char and player2's char
*if either is >= 2 check middle square btwn them.
*if middle sq = correct player char, that player has won.
*/
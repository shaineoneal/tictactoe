#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cctype>
#include "board.h"

using namespace std;



int main ()
{
    Player player1, player2;
    Board bord;
    char choice;
    int turn;




  //player 1 character select
    cout << "Player 1 - ";
    player1.selectLetter();
    cout << "Your character is: " << player1.getLetter() << endl;

  //player 2 character select
    cout << "Player 2 - ";
    player2.selectLetter();
    cout << "Your character is: " << player2.getLetter() << endl;

    bord.display();

<<<<<<< HEAD
    while(turn < 6)
    {
        if(turn % 2 == 1)
        {
          //player1 square selection
            cout << "Player 1, select a square: ";
            cin >> choice;

            bord.updateDisplay(bord.searchChoice(choice), player1.getLetter());

            bord.display();
        }
        else if (turn % 2 == 0)
        {
          cout << "Player 2, select a square: ";
          cin >> choice;

          bord.updateDisplay(bord.searchChoice(choice), player2.getLetter());

          bord.display();
        }

        turn++;
    }
    
    while(bord.winCheck() == false)
    {
        if(turn % 2 == 1)
        {
          //player1 square selection
            cout << "Player 1, select a square: ";
            cin >> choice;
=======

    
  //player1 square selection
    cout << "Player 1, select a square: ";
    cin >> choice;
>>>>>>> 739326ad0446da981ad603e9a8bf0198c3fe1997

            bord.updateDisplay(bord.searchChoice(choice), player1.getLetter());

            bord.display();
        }
        else if (turn % 2 == 0)
        {
          cout << "Player 2, select a square: ";
          cin >> choice;

          bord.updateDisplay(bord.searchChoice(choice), player2.getLetter());

          bord.display();
        }

        bord.winCheck();
        turn++;
    }
  
    cout << "win";

    //bord.winCheck();

        cout << bord.winCheck();
    return 0;
}
//player1 select character
//player2 select character
//player1 turn
  //select square
  //display player1's character in selectedSquare
//player2 turn
  //select square
  //display player2's character in selectedSquare


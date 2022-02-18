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




  //player 1 character select
    cout << "Player 1 - ";
    player1.selectLetter();
    cout << "Your character is: " << player1.getLetter() << endl;

  //player 2 character select
    cout << "Player 2 - ";
    player2.selectLetter();
    cout << "Your character is: " << player2.getLetter() << endl;

  //size of game board
    cout << "How large would you like your gameboard to be? ";
    

    bord.display();


    
  //player1 square selection
    cout << "Player 1, select a square: ";
    cin >> choice;

    bord.updateDisplay(bord.searchChoice(choice), player1.getLetter());

    bord.display();

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


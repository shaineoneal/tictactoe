#ifndef BOARD_H
#define BOARD_H

#include <vector>

class Player {
        char letter;

    public:
        void selectLetter();
        char getLetter()
            {return letter;}
};


void Player::selectLetter()
{
  //ask player for character
    cout << "Please select a letter for your character: ";
    cin >> letter;
    letter = toupper(letter);
}

class Board {
        int size;
        int playerChoice;
        vector<vector<char>> display
        
       // char *corners[4] = {&board[0][0], &board[0][2], &board[2][0], &board[2][2]};

    public:
        Board() = default;
        Board(int s)
        {
            for( char i = 0; i >= s; i++)
            {
                display.push_back(i);
            }
        }


        char* searchChoice(char);
        void display();
        void updateDisplay(char*, char);
        void setCorners();
        bool winCheck(char);

};


#endif

#ifndef BOARD_H
#define BOARD_H

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
        int playerChoice;
       
    public:
        char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
        char* corners[4];

        Board()
        {
            corners[0] = &board[0][0];
            corners[1] = &board[0][2];
            corners[2] = &board[2][0];
            corners[3] = &board[2][2];
        }

        char* searchChoice(char);
        void display();
        void updateDisplay(char*, char);
        bool winCheck(char *);

};


#endif

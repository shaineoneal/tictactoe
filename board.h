#ifndef BOARD_H
#define BOARD_H

class Board {
        int playerChoice;

    public:
        char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

        char* searchChoice(char);
        void display();
        void updateDisplay(char*, char);
        bool winCheck();

};


#endif

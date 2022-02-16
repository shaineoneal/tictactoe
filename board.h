#ifndef BOARD_H
#define BOARD_H

class Board {
        int playerChoice;
        char *corners[4] = {&board[0][0], &board[0][2], &board[2][0], &board[2][2]};

    public:
        Board()

        char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

        char* searchChoice(char);
        void display();
        void updateDisplay(char*, char);
        void setCorners();
        bool winCheck();

};


#endif

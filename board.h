#ifndef BOARD_H
#define BOARD_H

class Board {
        int playerChoice;

    public:
        char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

        int searchChoice();
        void display(char[3][3]);
        void updateDisplay(char*, char);

};


#endif

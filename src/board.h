#ifndef __BOARD__
#define __BOARD__

#include <stdio.h>

//void put_o(struct Board * board, int x, int y);

#define XCH 88
#define OCH 79

enum state{
        WinO,
        WinX,
        Draw,
        NotEmpty
};

struct Board{
        int board[3][3];

};
void print_board(struct Board * board);
void put_o(struct Board * board,int x, int y);
void put_x(struct Board * board,int x, int y);
#endif 

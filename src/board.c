#include <stdio.h>
#include "board.h"

#define XCH 88
#define OCH 79

void print_board(struct Board * board){
        printf("\n");
        printf("| %d | %d | %d |\n", board->board[0][0] , board->board[0][1],board->board[0][2]);
        printf("| %d | %d | %d |\n", board->board[1][0] , board->board[1][1],board->board[1][2]);
        printf("| %d | %d | %d |\n", board->board[2][0] , board->board[2][1],board->board[2][2]);
        printf("\n");
}
void put_o(struct Board * board,int x, int y){
        board -> board[--x][--y] = OCH;
}
void put_x(struct Board * board,int x, int y){
        board -> board[--x][--y] = XCH;
}

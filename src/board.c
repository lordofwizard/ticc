#include <stdio.h>
#include "board.h"

void print_board(struct Board * board){
        printf("\n");
        printf("| %c | %c | %c |\n", board->board[0][0] , board->board[0][1],board->board[0][2]);
        printf("| %c | %c | %c |\n", board->board[1][0] , board->board[1][1],board->board[1][2]);
        printf("| %c | %c | %c |\n", board->board[2][0] , board->board[2][1],board->board[2][2]);
        printf("\n");
}
void put_o(struct Board * board,int x, int y){
        board -> board[--x][--y] = OCH;
}
void put_x(struct Board * board,int x, int y){
        board -> board[--x][--y] = XCH;
}

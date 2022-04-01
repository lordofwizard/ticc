#include <stdio.h>
#include "board.h"

int main(){
	printf("Hello Ticc");
        struct Board b;
        for(int i = 0; i < 3; i ++){
                for(int j = 0 ; j < 3 ; j++)
                        b.board[i][j]=69;
        }
        print_board(&b);

        return 0;        
}

#include <stdio.h>

char board[3][3]; // 3x3 board

void initializeBoard() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            board[i][j] = ' ';
        }
    }
}

void printBoard() {
    printf("\n");
    for(int i = 0; i < 3; i++) {
        printf("| %c | %c | %c |\n", board[i][0], board[i][1], board[i][2]);
    }
    printf("\n");
}

int checkWin(char player) {
    // Check rows
    for(int i = 0; i < 3; i++) {
        if (board[i][0] == player && board[i][1] == player && board[i][2] == player)
            return 1;
    }

    // Check columns
    for(int i = 0; i < 3; i++) {
        if (board[0][i] == player && board[1][i] == player && board[2][i] == player)
            return 1;
    }

    // Check diagonals
    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
        return 1;

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
        return 1;

    return 0;
}

int isBoardFull() {
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if (board[i][j] == ' ')
                return 0; // Board is not full
        }
    }
    return 1; // Board is full
}

int main() {
    initializeBoard();
    char currentPlayer = 'X';
    int x, y;

    while (1) {
        printBoard();
        printf("Player %c, enter row (0-2) and column (0-2) separated by space: ", currentPlayer);
        scanf("%d %d", &x, &y);

        if (x < 0 || x > 2 || y < 0 || y > 2 || board[x][y] != ' ') {
            printf("Invalid move. Try again.\n");
            continue;
        }

        board[x][y] = currentPlayer;

        if (checkWin(currentPlayer)) {
            printBoard();
            printf("Player %c wins!\n", currentPlayer);
            break;
        }

        if (isBoardFull()) {
            printBoard();
            printf("It's a draw!\n");
            break;
        }

        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

    return 0;
}


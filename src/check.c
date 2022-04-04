#include "check.h"
enum state check(struct Board * stcB)
{
    // for rows
    enum state boardState = NotEmpty; 
    for(int nI = 0; nI <= 2; nI++)
    {
        if(stcB->board[nI][0] == stcB->board[nI][1] && stcB->board[nI][1] == stcB->board[nI][2])
        {
           // return stcB->board[nI][0];
           boardState = (stcB->board[nI][0] == XCH )  ? WinX : NotEmpty;
           boardState = (stcB->board[nI][0] == OCH )  ? WinO : NotEmpty;
        }
    }
    
    // for column

    for(int nI = 0; nI <= 2; nI)
    {
        if (stcB->board[0][nI] == stcB->board[1][nI] && stcB->board[1][nI] == stcB->board[2][nI])
        {
           boardState = (stcB->board[0][nI] == XCH )  ? WinX : NotEmpty;
           boardState = (stcB->board[0][nI] == OCH )  ? WinO : NotEmpty;
          // return stcB->board[0][nI];
        }
        
    }

    // for diagonals

    if(stcB->board[0][0] == stcB->board[1][1] && stcB->board[1][1] == stcB->board[2][2])
    {
           boardState = (stcB->board[0][0] == XCH )  ? WinX : NotEmpty;
           boardState = (stcB->board[0][0] == OCH )  ? WinO : NotEmpty;
        //return stcB->board[0][0];
    }
    
    //  for diagonals
    if (stcB->board[0][2] == stcB->board[1][1] && stcB->board[1][1] == stcB->board[2][0])
    {
           boardState = (stcB->board[0][2] == XCH )  ? WinX : NotEmpty;
           boardState = (stcB->board[0][2] == OCH )  ? WinO : NotEmpty;
        //return stcB->board[0][2];
    }
    return boardState;
}


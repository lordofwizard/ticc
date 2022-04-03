#include "check.h"

void check()
{
    // for rows
    
    for(int nI = 0; nI <= 2; nI++)
    {
        if(stcB->board[nI][0] == stcB->board[nI][1] && stcB->board[nI][1] == stcB->board[nI][2])
        {
            return stcB->board[nI][0];
        }
    }
    
    // for column

    for(int nI = 0; nI <= 2; nI)
    {
        if (stcB->board[0][nI] == stcB->board[1][nI] && stcB->board[1][nI] == stcB->board[2][nI])
        {
            return stcB->board[0][nI];
        }
        
    }

    // for diagonals

    if(stcB->board[0][0] == stcB->board[1][1] && stcB->board[1][1] == stcB->board[2][2])
    {
        return stcB->board[0][0];
    }
    
    //  for diagonals
    if (stcB->board[0][2] == stcB->board[1][1] && stcB->board[1][1] == stcB->board[2][0])
    {
        return stcB->board[0][2];
    }
    
}

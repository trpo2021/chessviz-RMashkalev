#include "pawn.h"
#include <stdio.h>

int wincondition(char board[9][9])
{
    int wwin = 1, bwin = 1, i, j;

    for (i = 0; i < 9; i++) {
        for (j = 1; j < 9; j++) {
            if (board[i][j] == 'k')
                wwin = 0;
            if (board[i][j] == 'K')
                bwin = 0;
        }
    }
    if (wwin == 1)
        return 1;
    else if (bwin == 1)
        return 2;

    return 0;
}
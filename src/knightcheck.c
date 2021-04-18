#include "pawn.h"
#include <stdio.h>

int knightcheck(char board[9][9], char turn[6])
{
    if ((turn[3] == (turn[0] + 1)) && (turn[4] == (turn[1] + 2))) {
        return 0;
    } else if ((turn[3] == (turn[0] + 1)) && (turn[4] == (turn[1] - 2))) {
        return 0;
    } else if ((turn[3] == (turn[0] - 1)) && (turn[4] == (turn[1] + 2))) {
        return 0;
    } else if ((turn[3] == (turn[0] - 1)) && (turn[4] == (turn[1] - 2))) {
        return 0;
    } else if ((turn[3] == (turn[0] + 2)) && (turn[4] == (turn[1] + 1))) {
        return 0;
    } else if ((turn[3] == (turn[0] - 2)) && (turn[4] == (turn[1] + 1))) {
        return 0;
    } else if ((turn[3] == (turn[0] + 2)) && (turn[4] == (turn[1] - 1))) {
        return 0;
    } else if ((turn[3] == (turn[0] - 2)) && (turn[4] == (turn[1] - 1))) {
        return 0;
    } else
        return -1;
}
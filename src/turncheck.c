#include "pawn.h"

int turncheck(char turn[6])
{
    if ((turn[0] > 96) && (turn[0] < 105) && (turn[3] > 96) && (turn[3] < 105)
        && (turn[1] > 48) && (turn[1] < 57) && (turn[4] > 48) && (turn[4] < 57))
        return 0;
    else
        return 1;
}
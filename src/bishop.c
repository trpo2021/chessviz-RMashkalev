#include <stdio.h>
#include <stdlib.h>
#include "pawn.h"

void bishopmove(char board[9][9], char turn[6])
{
    int asciinumber = 56, asciiletter = 96;

    if ((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'B')
        && ((abs(turn[0] - turn[3])) == (abs(turn[1] - turn[4])))
        && (bishopcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'B';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    } else if (
            (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'b')
            && ((abs(turn[0] - turn[3])) == (abs(turn[1] - turn[4])))
            && (bishopcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'b';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    }
}
#include <stdio.h>
#include "pawn.h"

void knightmove(char board[9][9], char turn[6])
{
    int asciinumber = 56, asciiletter = 96;

    if ((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'N') && (knightcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'N';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    } else if ((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'n') && (knightcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'n';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    }
}
#include <stdio.h>
#include "pawn.h"

void kingmove(char board[9][9], char turn[6])
{
    int asciinumber = 56, asciiletter = 96;

    if ((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'K') && (kingcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'K';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    } else if ((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'k') && (kingcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'k';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    }
}
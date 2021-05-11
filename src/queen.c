#include "pawn.h"
#include <stdio.h>
#include <stdlib.h>

void queenmove(char board[9][9], char turn[6])
{
    int asciinumber = 56, asciiletter = 96;

    if ((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'Q')
        && ((abs(turn[0] - turn[3])) == (abs(turn[1] - turn[4])))
        && (bishopcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'Q';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    } else if (
            (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'q')
            && ((abs(turn[0] - turn[3])) == (abs(turn[1] - turn[4])))
            && (bishopcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'q';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    } else if (
            (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'Q')
            && (rookcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'Q';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    } else if (
            (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'q')
            && (rookcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'q';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    }
}
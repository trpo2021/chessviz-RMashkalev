#include "pawn.h"
#include <stdio.h>

void rookmove(char board[9][9], char turn[6])
{
    int asciinumber = 56, asciiletter = 96;
    if ((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'R')
        && (rookcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'R';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    } else if (
            (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'R')
            && (rookcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'R';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    } else if (
            (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'r')
            && (rookcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'r';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    } else if (
            (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'r')
            && (rookcheck(board, turn) == 0)) {
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'r';
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
    }
}
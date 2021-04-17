#include <stdio.h>
#include "pawn.h"

void pawnmove(char board[9][9], char turn[6], int pawnp[9], int pawnP[9])
{
    int asciinumber = 56, asciiletter = 96;

    if ((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'P') 
        && (turn[4] - turn[1] < 3) && (pawnP[(turn[0] - asciiletter)] == 0)) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'P';
        pawnP[(turn[0] - asciiletter)]++;
    } else if (
            (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'P') 
        && (turn[4] - turn[1] < 2) 
        && (pawnP[(turn[0] - asciiletter)] != 0)) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'P';
    } else if (
            (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'p') 
        && (turn[1] - turn[4] < 3) 
        && (pawnp[(turn[0] - asciiletter)] == 0)) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'p';
        pawnp[(turn[0] - asciiletter)]++;
    } else if (
            (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'p') 
        && (turn[1] - turn[4] < 2) 
        && (pawnp[(turn[0] - asciiletter)] != 0)) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'p';
    }
}
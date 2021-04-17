#include <stdio.h>
#include "pawn.h"

void pawnattack(char board[9][9], char turn[6], int pawnp[9], int pawnP[9])
{
    int asciinumber = 56, asciiletter = 96;

    if ((board[(asciinumber - turn[4])][(turn[3] - asciiletter)] != ' ') 
        && (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] 
        == 'P')) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'P';
    } else
    if ((board[(asciinumber - turn[4])][(turn[3] - 95)] != ' ') 
        && (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] 
        == 'P')) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - 95)] = 'P';
    } else
    if ((board[(asciinumber - turn[4])][(turn[3] - asciiletter)] != ' ') 
        && (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] 
        == 'p')) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'p';
    } else
    if ((board[(asciinumber - turn[4])][(turn[3] - 95)] != ' ') 
        && (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] 
        == 'p')) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - 95)] = 'p';
    }
}
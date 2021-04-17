#include <stdio.h>
#include "pawn.h"

void pawn(char board[9][9], int pawnp[9], int pawnP[9], char turn[6])
{
    int asciinumber = 56, asciiletter = 96;

    if ((turn[0] == turn[3]) 
        && (board[(asciinumber - turn[4])][(turn[3] - asciiletter)] == ' '))
        pawnmove(board, turn, pawnp, pawnP);
    if (turn[0] != turn[3])
        pawnattack(board, turn, pawnp, pawnP);                                                             
    printf("\n");
}
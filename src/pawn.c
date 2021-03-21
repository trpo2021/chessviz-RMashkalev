#include <stdio.h>
#include "pawn.h"

void pawnmove(char board[9][9], char turn[6], int pawnp[9], int pawnP[9])
{
    int asciinumber = 56, asciiletter = 96;

    if((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'P') && (turn[4] - turn[1] < 3) && (pawnP[(turn[0] - asciiletter)] == 0)) 
    {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'P';
        pawnP[(turn[0] - asciiletter)]++;
    } else
    if((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'P') && (turn[4] - turn[1] < 2) && (pawnP[(turn[0] - asciiletter)] != 0)) 
    {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'P';
    } else
    if((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'p') && (turn[1] - turn[4] < 3) && (pawnp[(turn[0] - asciiletter)] == 0)) 
    {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'p';
        pawnp[(turn[0] - asciiletter)]++;
    } else                                                                                                          
    if((board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'p') && (turn[1] - turn[4] < 2) && (pawnp[(turn[0] - asciiletter)] != 0)) 
    {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'p';
    }
}

void pawnattack(char board[9][9], char turn[6], int pawnp[9], int pawnP[9])
{
    int asciinumber = 56, asciiletter = 96;

    if((board[(asciinumber - turn[4])][(turn[3] - asciiletter)] != ' ') && (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'P')) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'P';
    } else
    if((board[(asciinumber - turn[4])][(turn[3] - 95)] != ' ') && (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'P')) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - 95)] = 'P';
    } else
    if((board[(asciinumber - turn[4])][(turn[3] - asciiletter)] != ' ') && (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'p')) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - asciiletter)] = 'p';
    } else
    if((board[(asciinumber - turn[4])][(turn[3] - 95)] != ' ') && (board[(asciinumber - turn[1])][(turn[0] - asciiletter)] == 'p')) {
        board[(asciinumber - turn[1])][(turn[0] - asciiletter)] = ' ';
        board[(asciinumber - turn[4])][(turn[3] - 95)] = 'p';
    }
}

void pawn(char board[9][9],int pawnp[9], int pawnP[9])
{
    int asciinumber = 56, asciiletter = 96;
    char turn[6] = {};

    scanf("%s", turn);

    if((turn[0] == turn[3]) && (board[(asciinumber - turn[4])][(turn[3] - asciiletter)] == ' '))
        pawnmove(board, turn, pawnp, pawnP);
    if(turn[0] != turn[3])
        pawnattack(board, turn, pawnp, pawnP);
                                                                         
    printf("\n");
}
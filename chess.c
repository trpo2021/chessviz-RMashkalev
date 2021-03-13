#include <stdio.h>
#include <ctype.h> 
#include "pawn.h"

void display(char board[9][9])
{
    int i, j;
    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%2c ", board[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int i, j, bwin = 0, wwin = 0;
    int pawnp[9] = {}, pawnP[9] = {};
    char board[9][9] = {};

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if ((j == 0) & (i != 8)) {
                board[i][j] = (56 - i);
            }
            if ((i == 8) & (j != 0)) {
                board[i][j] = (96 + j);
            }
        }
    }

    for (i = 1; i < 9; i++) {
        board[1][i] = 'p';
    }
    
    for (i = 1; i < 9; i++) {
        board[6][i] = 'P';
    }

    board[0][1] = 'r';
    board[0][2] = 'n';
    board[0][3] = 'b';
    board[0][4] = 'q';
    board[0][5] = 'k';
    board[0][6] = 'b';
    board[0][7] = 'n';
    board[0][8] = 'r';
    board[8][0] = ' ';

    for (i = 1; i < 9; i++) {
        board[7][i] = toupper(board[0][i]);
    }

    for (i = 2; i < 6; i++) {
        for (j = 1; j < 9; j++) {
            board[i][j] = ' ';
        }
    }

    // display(board);

    printf("Press any botton to start\n");

    while((wwin + bwin) == 0) {
        pawn(board, pawnp, pawnP);

        display(board);

        wwin = 1;
        bwin = 1;
        
        for (i = 0; i < 9; i++) {
            for (j = 1; j < 9; j++) {
                if(board[i][j] == 'k') 
                    wwin = 0;
                if(board[i][j] == 'K')
                    bwin = 0;
            }
        }    
    }

    if(wwin == 1)
        printf("White wins\n");
    else   
        printf("Black wins\n");

    return 0;
}
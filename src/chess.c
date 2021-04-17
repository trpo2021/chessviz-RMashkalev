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
    int i, j, asciinumber = 56, asciiletter = 96;
    int pawnp[9] = {}, pawnP[9] = {};
    char board[9][9] = {};

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if ((j == 0) & (i != 8)) {
                board[i][j] = (asciinumber - i);
            }
            if ((i == 8) & (j != 0)) {
                board[i][j] = (asciiletter + j);
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

    FILE *file = NULL;
    file = fopen("src/turns.txt", "r");

    i = 0;
    while (i == 0) {
        display(board);
        char turn[6] = {};
        // scanf("%s", turn);
        fgets(turn, 7, file);

        j = 1;
        
        if (turncheck(turn) == 0)
            j = 0;

        if(j == 0)
        {
        switch (board[(asciinumber - turn[1])][(turn[0] - asciiletter)])
        {
            case 82:
                rookmove(board, turn);
                i = wincondition(board);
                break;
            case 114:
                rookmove(board, turn);
                i = wincondition(board);
                break;
            case 112:
                pawn(board, pawnp, pawnP, turn);
                i = wincondition(board);
                break;
            case 80:
                pawn(board, pawnp, pawnP, turn);
                i = wincondition(board);
                break;
            case 78:
                knightmove(board, turn);
                i = wincondition(board);
                break;
            case 110:
                knightmove(board, turn);
                i = wincondition(board);
                break;
            case 66:
                bishopmove(board, turn);
                i = wincondition(board);
                break;
            case 98:
                bishopmove(board, turn);
                i = wincondition(board);
                break;
            case 81:
                queenmove(board, turn);
                i = wincondition(board);
                break;
            case 113:
                queenmove(board, turn);
                i = wincondition(board);
                break;
            case 75:
                kingmove(board, turn);
                i = wincondition(board);
                break;
            case 107:
                kingmove(board, turn);
                i = wincondition(board);
                break;
        }
        }
        printf("\n");
    }
    display(board);
    if(i == 1)
        printf("White wins\n");
    else  
        printf("Black wins\n");
    return 0;
}
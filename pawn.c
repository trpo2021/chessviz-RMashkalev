#include <stdio.h>
#include "pawn.h"

void pawn(char board[9][9],int pawnp[9], int pawnP[9])
{
    char turn[6] = {};

    scanf("%s", turn);

    if((board[(56 - turn[1])][(turn[0] - 96)] == 'P') && (turn[4] - turn[1] < 3) && (pawnP[(turn[0] - 96)] == 0) && (board[(56 - turn[4])][(turn[3] - 96)] == ' ') && (turn[0] == turn[3])) { //Start
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'P';
        pawnP[(turn[0] - 96)]++;
    } else
    if((board[(56 - turn[1])][(turn[0] - 96)] == 'P') && (turn[4] - turn[1] < 2) && (pawnP[(turn[0] - 96)] != 0) && (board[(56 - turn[4])][(turn[3] - 96)] == ' ') && (turn[0] == turn[3])) {
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'P';
    } else
    if((board[(56 - turn[1])][(turn[0] - 96)] == 'p') && (turn[1] - turn[4] < 3) && (pawnp[(turn[0] - 96)] == 0) && (board[(56 - turn[4])][(turn[3] - 96)] == ' ') && (turn[0] == turn[3])) { //Ходы вперед
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'p';
        pawnP[(turn[0] - 96)]++;
    } else                                                                                                          
    if((board[(56 - turn[1])][(turn[0] - 96)] == 'p') && (turn[1] - turn[4] < 2) && (pawnp[(turn[0] - 96)] != 0) && (board[(56 - turn[4])][(turn[3] - 96)] == ' ') && (turn[0] == turn[3])) {
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'p';
    } else                                                                                                          //End
    if((board[(56 - turn[4])][(turn[3] - 96)] != ' ') && (board[(56 - turn[1])][(turn[0] - 96)] == 'P') && (turn[0] != turn[3])) {//Start
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'P';
    } else
    if((board[(56 - turn[4])][(turn[3] - 95)] != ' ') && (board[(56 - turn[1])][(turn[0] - 96)] == 'P') && (turn[0] != turn[3])) {//Pawn attack
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 95)] = 'P';
    } else
    if((board[(56 - turn[4])][(turn[3] - 96)] != ' ') && (board[(56 - turn[1])][(turn[0] - 96)] == 'p') && (turn[0] != turn[3])) {//Pawn attack
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 96)] = 'p';
    } else
    if((board[(56 - turn[4])][(turn[3] - 95)] != ' ') && (board[(56 - turn[1])][(turn[0] - 96)] == 'p') && (turn[0] != turn[3])) {//End
        board[(56 - turn[1])][(turn[0] - 96)] = ' ';
        board[(56 - turn[4])][(turn[3] - 95)] = 'p';
    }                                                                       
    printf("\n");
}
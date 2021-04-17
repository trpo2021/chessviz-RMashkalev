#ifndef PAWN_H
#define PAWN_H

void pawn(char board[9][9],int pawnp[9], int pawnP[9], char turn[6]);

void pawnmove(char board[9][9], char turn[6], int pawnp[9], int pawnP[9]);

void pawnattack(char board[9][9], char turn[6], int pawnp[9], int pawnP[9]);

void rookmove(char board[9][9], char turn[6]);

void knightmove(char board[9][9], char turn[6]);

void bishopmove(char board[9][9], char turn[6]);

void queenmove(char board[9][9], char turn[6]);

void kingmove(char board[9][9], char turn[6]);

int turncheck(char turn[6]);

int kingcheck(char board[9][9], char turn[6]);

int bishopcheck(char board[9][9], char turn[6]);

int knightcheck(char board[9][9], char turn[6]);

int rookcheck(char board[9][9], char turn[6]);

int wincondition(char board[9][9]);

#endif
#include <stdio.h>
#include <ctype.h> 

int main()
{
    int i, j, bfr;
    char array[9][9] = {};

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            if ((j == 0) & (i != 8)) {
                array[i][j] = (56 - i);
            }
            if ((i == 8) & (j != 0)) {
                array[i][j] = (96 + j);
            }
        }
    }

    for (i = 1; i < 9; i++) {
        array[1][i] = 'p';
    }
    
    for (i = 1; i < 9; i++) {
        array[6][i] = 'P';
    }

    array[0][1] = 'r';
    array[0][2] = 'n';
    array[0][3] = 'b';
    array[0][4] = 'q';
    array[0][5] = 'k';
    array[0][6] = 'b';
    array[0][7] = 'n';
    array[0][8] = 'r';

    for (i = 1; i < 9; i++) {
        array[7][i] = toupper(array[0][i]);
    }

    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%2c ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
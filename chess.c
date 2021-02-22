#include <stdio.h>
#include <ctype.h> 

int main()
{
    int i, j;
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


    for (i = 0; i < 9; i++) {
        for (j = 0; j < 9; j++) {
            printf("%2c ", array[i][j]);
        }
        printf("\n");
    }

    return 0;
}
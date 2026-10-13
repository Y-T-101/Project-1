#include <stdio.h>
#include <string.h>

int main(void){

    int row = 4;
    int col = 28;

    for (int i = 0; i <= row; i++) {
        for (int j = 0; j <= col; j++) {
            printf("#");

            if (i == j) {
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
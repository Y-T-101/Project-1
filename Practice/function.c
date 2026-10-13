#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

/*boxLoop prototype function*/
int boxLoop(int row, int column, int ballX, int ballY);

/*Main funcition*/
int main(void) {

    int ballX = 10;
    int ballY = 3;

    int ballDirectionX = 1;
    int ballDirectionY = 1;

    int maxRows = 7;
    int maxcols = 24;

    while (1) {

        system("cls");

        boxLoop(maxRows, maxcols, ballX, ballY);

        /* Check left/right walls */
        if (ballX >= 22) {
            ballDirectionX = -1;
        }

        if (ballX <= 1) {
            ballDirectionX = 1;
        }

        /* Check top/bottom walls */
        if (ballY >= 5) {
            ballDirectionY = -1;
        }

        if (ballY <= 1) {
            ballDirectionY = 1;
        }

        /* Move the ball */
        ballX = ballX + ballDirectionX;
        ballY = ballY + ballDirectionY;

        Sleep(100);
    }
    return 0;
}

int boxLoop(int row, int column, int ballX, int ballY) {

    for (int i = 0;  i < row; i++) {
        printf("   ");/*space for the outer loop to get bigger*/

        for (int j = 0; j < column; j++) {
            printf("  "); /*space for the inner loop to get bigger*/

            if (i == 0 || i == row -1) {
                printf("-");
            } 
            else if (j == 0 || j == column -1) {
                printf("|");
            }
            else if (i == ballY && j == ballX) { /* Ball */
                printf("0");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
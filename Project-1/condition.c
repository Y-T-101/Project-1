#include <stdio.h>
#include <windows.h>
#include <stdlib.h>

int boxFunctionLoop(int rows, int columns, int ballX, int ballY);

/*main function*/
int main(void) {

    int maxRows = 7;
    int maxColumns = 24;

    int ballX = 10;
    int ballY = 3;

    int ballDirectionY = 1;
    int ballDirectionX = 1;

    while ( 1) {
        system("cls");
        boxFunctionLoop(maxRows, maxColumns, ballX, ballY);

        if (ballX >= 22) {
            ballDirectionX = -1;
        }
        if (ballX <= 1) {
            ballDirectionX = 1 ;
        }
        if (ballY >= 5) {
            ballDirectionY = -1;
        }
        if (ballY <= 1) {
            ballDirectionY = 1;
        }
        
        ballX = ballX + ballDirectionX;
        ballY = ballY + ballDirectionY;

        Sleep(100);
    }
    
    return 0;
}

int boxFunctionLoop(int rows, int columns, int ballX, int ballY) {
    
    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < columns; j++) {

            if (i == 0 || i == rows -1) {
                printf("-");
            }
            else if (j == 0 || j == columns -1) {
                printf("|");
            }
            else if (i == ballY && j == ballX) {
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
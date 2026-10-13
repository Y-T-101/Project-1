#include <stdio.h>
#include <windows.h>
#include <time.h>

int boxLabel(int x, int y, int rows, int columns, int ballX, int ballY);

/*Main Function*/
int main(void) {
 
    int maxRows = 7;
    int maxColumns = 34;
    int ballX = 3.4;
    int ballY = 16;


    while (1) {
        int directionX = 1;
        int directionY = 1;

        if (ballX <= 33) {
            directionX + 1;
        }
        else if (ballX >= 2) {
            directionX - 1;
        }
        ballX = ballX + directionX;
        //ballY = ballY + direction;
        system("CLS");
        boxLabel(10, 7, maxRows, maxColumns, ballX, ballY);
        

        Sleep(150);
    }
    

    return 0;
}

int boxLabel(int x, int y, int rows, int colummns, int ballX, int ballY) {

    for (int i = 0; i < rows; i++) {

        for (int j = 0; j < colummns; j++) {
            
            if (i == 0 || i == rows -1) {
                printf("-");
            }
            else if (j == 0 || j == colummns -1) {
                printf(":");
            }
            else if (i == ballX && j == ballY) {
                printf("0");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
 
    }
}
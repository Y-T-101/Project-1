#include <stdio.h>

int largeNumber(int number, int bigNumber, int range); /* Function prototype take three(3) parameters*/
/*Main Function*/
int main(void) {
    
    int num;
    int bigNumber = 0;
    int rangeStop = 10;

    largeNumber(num, bigNumber, rangeStop);

    return 0;
}

int largeNumber(int number, int bigNumber, int range) {
    /*largenumber fuunction condition checking for large number */

    for (int i = 0; i < range; i++) {
        printf("please enter a number: ");
        scanf("%d", &number);

        if (bigNumber > number) {
            number = bigNumber;
        }
        
    }
    printf("\nThis is the largest number in the list: %d", number);

}
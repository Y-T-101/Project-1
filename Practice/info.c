#include <stdio.h>

int addNumber(int x, int y);

int main(void) {

    int result = addNumber( 2, 5);
    printf("%d is your answer: ", result);
    return 0;
}

int addNumber(int x, int y) {
    int result = x + y;
    return result;
}
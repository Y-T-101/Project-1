/*Write a program that asks for 10 numbers and finds the largest number.*/

#include <stdio.h>
#include <string.h>

/*Main Function*/
int main(void) {
    int largeNum = 0;

   for (int i = 0; i < 10; i++) {
        int num;
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num < largeNum) {
            largeNum = num;
        }
       
       
    }
    
    printf("This is large: %d", largeNum);

    return 0;

}

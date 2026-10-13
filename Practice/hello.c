#include <stdio.h>

int main(void) {
    // printf("Hello world\n");
    
        //basic arithmetic
        // int x = 12;
        // int y = 15;
        // int result = (y + x);
        // printf("%d", result); // 27



        //year calculator
        int current_years;
        int birth_years;
        int result;

        printf("what is your current years: ");
        scanf(" %d", &current_years);
        printf("what is your birt years: ");
        scanf("%d", &birth_years);

        result = (current_years - birth_years);
        printf(" You are: %d", result);
    return 0;
}
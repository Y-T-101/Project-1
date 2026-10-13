#include <stdio.h>

//run main function 
int main(void) {
    double num1;
    double num2;
    double result;
    char op;

    printf("Please enter the first number:\n");
    scanf("%lf", &num1);
    printf("Please enter the second number:\n");
    scanf("%lf", &num2);
    printf("Please enter your operator: ");
    scanf("%s", &op);

    switch (op) {
        case '+':
            result = num1 + num2;
            printf("Result: %.lf", result);
            break;

        case '-':
            result = num1 - num2;
            printf("Result: %.lf", result);
            break;

        case '*':
            result = num1 * num2;
            printf("Result: %.lf", result);
            break;

        default: 
            printf("Not vaild number");
    }

    return 0;
}


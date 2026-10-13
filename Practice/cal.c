#include <stdio.h>

// Run main function 
int main(void) {
    //declearing variable 
    double num1;
    double num2;
    double result;
    char op;
    //getting user input
    printf("\tWelcome to C programming\nStart Calculation");
    printf("\nPlease enter your first number: ");
    scanf("%lf", &num1);
    printf("\nPlease enter your second number: ");
    scanf("%lf", &num2);
    printf("\nPlease Enter your operator: ");
    scanf("%c", &op);

    //Conditions 
    if (op == '+') {
        result = num1 + num2;
        printf("The Result of %.2lf + %.2lf = %.2lf", num1, num2, result);
    }
    else if (op == '-') {
        result = num1 - num2;
        printf("The result of %.2lf - %.2lf = %.2lf", num1, num2, result);
    }
    else if (op == '*') {
        result = num1 * num2;
        printf("The result of %.2lf * %.2lf = %.2lf", num1, num2, result);

    }
    else if (op == '/') {
        // checking if number can be divded by 0
        if (num2 == 0) {
            printf("0 can not be divided");
        } 
        else {
            result = num1 / num2;
            printf("The result of %.2lf / %.2lf = %.2lf", num1, num2, result);
        }
        
    
    }

    return 0;
}
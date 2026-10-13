#include <stdio.h>

//Main function 
int main(void) {
    //declearition of veriable
    double num1;
    double num2;
    double result;
    char op;

    //ask for user input
    printf("Please enter your operator: ");
    scanf(" %c", &op);
    printf("Please enter your first number");
    scanf(" %lf", &num1);
    printf("Please enter your second number");
    scanf(" %lf", &num2);

    //condition
    if (op == '+') {
	    result = num1 + num2;
	    printf("your result: %.2lf", result);
    }
    else if (op == '-') {
	    result = num1 - num2;
	    printf("your result: %.2lf ", result);
    }
    else if (op == '*') {
	    result = num1 * num2;
	    printf("your result: %.2lf ", result);
    }
    else if (op == '/') {
	    if (num2 == 0) {
	    printf("0 division error");
	    }
        else {
            result = num1 / num2;
            printf("your result: %.2lf ", result);
        }
    }
    else {
	    printf("operator not exist");
    }

    return 0;

}













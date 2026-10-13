#include <stdio.h>

int main(void) {

    double width;
    double height;
    double perimater;
    double area;

    printf("Enter the width: ");
    scanf("%lf", &width);
    printf("Enter the height: ");
    scanf("%lf", &height);


    area = width * height;
    perimater = 2 * width + height;
    printf("Area: %.2lf\nPrimater: %.2lf", area, perimater);
}
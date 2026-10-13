#include <stdio.h>
#include <string.h>

int main(void) {

    char items[50];
    int quantity;
    float prices = 12.5f;
    float total;

    printf("Which items you want to buy: ");
    fgets(items, sizeof(items), stdin);
    items[strlen(items) - 1] = '\0';

    printf("Enter the among of %s you need: ", items);
    scanf("%d", &quantity);

    total = quantity * prices;
    printf("Your coust is: $%.2f", total);

    return 0;

}
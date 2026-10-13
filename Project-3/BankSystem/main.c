#include <stdio.h>
#include <string.h>

void displayMenu();
char createAccount();

int main(void) {

    displayMenu();
    int choice;
    printf("Enter your choice from the listen:");

    scanf("%d", &choice);
    if (choice == '1') {
        printf("Welcome to create a Account...");
        printf("%d", createAccount());
    }
    else if (choice == 2) {
        printf("Welcome to the home f the programming languages.");
    }


    return 0;
}

void displayMenu() {

    printf("\n"
        "============================ \n"
        "         BANKING SYSTEMS    \n"
        "============================ \n"
        );
    
    printf( "1. Create Account\n"
            "2. Deposite Money\n"
            "3. Withdraw Money\n"
            "4. Check alance\n"
            "5. Account Information\n"
            "6. Exit\n"     
        );
}

char createAccount() {
    char name[20];
    double number;

    printf("What is your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your nummber: ");
    scanf(" %lf", &number); 
    printf("Your Number: %lf\n", number);
}

#include <stdio.h>
#include <string.h>

int main(void) {

    int i = 0;

    while(i <= 10) {
        char name[60];
        char password[50];
        printf("Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        if (name == "Bob") {
            printf("Not the user try again: \n");
            fgets(name, sizeof(name), stdin);
            name[strlen(name) - 1] = '\0';
        }
        else {
            printf("Please enter your password: ");            
     	    scanf("%s", &password);
            printf("Welcome %s: Your password is: *****..", name);
     
       
            if (strlen(password) <= 5) {
                printf("Password length is too short. at 8 digits is better!!\n");
                printf("Try your password again: ");
                scanf("%s", &password);   
                
            }
            else {
                printf("Done!!");
            }
            break;
        }
        i++;
    }


    return 0;
}
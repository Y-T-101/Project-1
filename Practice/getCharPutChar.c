#include <stdio.h>
#include <string.h>


/*Function prototype*/
char getUserName(char name[50]);
int getUserAge(int age);
int getUserNumber(int number);
int getUserHeight(int height);
int getUserWidth(int width);
char getUserPc(char getComputer[50]);

/*Main function*/
int main(void) {

    char names[50];
    printf("Please enter your name: ");
    fgets(names, sizeof(names), stdin);
    names[strlen(names) - 1] = '\0';

    int ages;
    printf("Please enter your age: ");
    scanf(" %d", &ages);

    int numbers; 
    printf("please enter your phone number: ");
    scanf(" %d", &numbers);
    
    double width;
    printf("Please enter your width: ");
    scanf(" %lf", &width);

    double heights;
    printf("Please enter your height: ");
    scanf(" %lf", &heights);

        
    /*calling funcction with condition */

    if ((getUserName(names) > 5 ) && (getUserAge(ages) > 12 ) &&
        (getUserHeight(heights) > 4 ) && (getUserWidth(width) > 6 ))
        {
            int choiceComputer;
            printf("\n1.Lenovo\n2.Dell\n3.Hp\n4.Mac\n");
            printf("Choice you computer (eg.1 or 2..):");
            scanf("%d", &choiceComputer);
            
            switch (choiceComputer)
            {
            case 1:
                printf("You select the Lenovo computer\n");
                break;
            case 2:
                printf("You select the Dell computer\n");
                break;
            case 3: 
                printf("You select the Hp Computer\n");
                break;
            case 4:
                printf("You select the Mac Compute\n");
                break;
            default:
                printf("Not provided\n");
                break;
            }

    }
    else {
        printf("You are not rich the age to own a lapot yet\n");
    }
 

    return 0;

}

char getUserName(char name[50]) {

    if (strlen(name) < 5) {
        printf("Name is too short\n");
    }

   return name[50];
}

int getUserAge(int age) {

    if (age <= 12) {
        printf("You are a youth...");
    }
   
    return age;
    
}

int getUserNumber(int number) {
    
    if (number <= 9 || number > 10) {
        printf("\nYour contact is not correct..");
        while (1) {
            printf("Please enter your number again: ");
            scanf("%d", &number);
            if (number == 10) {
                printf("Number is good..");
                break;
            }
        }
    }
   
   return number;

}

int getUserHeight(int height) {

   return height;
}

int getUserWidth(int width)  {

    return width;
}

char getUserPc(char getComputer[50]) {
    printf("Welcome to the computer store:---->>");

    return getComputer[50];
}






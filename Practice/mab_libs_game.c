#include <stdio.h>
#include <string.h>

int main(void) {
    //Mab Libs Games

    char noun1[50];
    char verb1[50];
    char verb2[50];
    char adjective1[50];

    printf("Please enter a noun (animal/human): ");
    fgets(noun1, sizeof(noun1), stdin);
    noun1[strlen(noun1) - 1] = '\0';

    printf("Please enter a verb (-ing): ");
    fgets(verb1, sizeof(verb1), stdin);
    verb1[strlen(verb1) - 1] = '\0';

    printf("Please enter a verb (-ing): ");
    fgets(verb2, sizeof(verb2), stdin);
    verb2[strlen(verb2) - 1] = '\0';

    printf("Please enter a adjective (describe):  ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("\n\
        The %s %s is %s over the %s %s.  \
        ", verb1, noun1, verb2, adjective1, noun1 \
        );

}
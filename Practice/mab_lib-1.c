#include <stdio.h>
#include <string.h>

int main(void) {
    // Mad Libs Game

    char noun1[50];
    char noun2[50];
    char verb1[50];
    char verb2[50];
    char adjective1[50];
    char place1[50];

    printf("========== MAD LIBS GAME ==========\n\n");

    printf("Enter a noun (animal or person): ");
    fgets(noun1, sizeof(noun1), stdin);
    noun1[strlen(noun1) - 1] = '\0';

    printf("Enter another noun (person or animal): ");
    fgets(noun2, sizeof(noun2), stdin);
    noun2[strlen(noun2) - 1] = '\0';

    printf("Enter a verb ending in -ing: ");
    fgets(verb1, sizeof(verb1), stdin);
    verb1[strlen(verb1) - 1] = '\0';

    printf("Enter another verb ending in -ing: ");
    fgets(verb2, sizeof(verb2), stdin);
    verb2[strlen(verb2) - 1] = '\0';

    printf("Enter an adjective: ");
    fgets(adjective1, sizeof(adjective1), stdin);
    adjective1[strlen(adjective1) - 1] = '\0';

    printf("Enter a place: ");
    fgets(place1, sizeof(place1), stdin);
    place1[strlen(place1) - 1] = '\0';


    printf("\n\n");
    printf("========== YOUR STORY ==========\n\n");

    printf("One beautiful morning, a %s named %s woke up earlier than usual.\n",
           adjective1, noun1);

    printf("The sun was shining brightly, and the birds were singing peacefully "
           "outside the window.\n");

    printf("Although everything seemed normal, %s had a strange feeling "
           "that something exciting was about to happen.\n",
           noun1);

    printf("After getting ready, %s decided to leave home and go to %s.\n",
           noun1, place1);

    printf("While walking down the road, %s noticed a mysterious sound coming "
           "from behind a large tree.\n",
           noun1);

    printf("At first, %s was afraid and did not know what to do.\n",
           noun1);

    printf("However, curiosity eventually became stronger than fear, so "
           "%s slowly walked toward the tree.\n",
           noun1);

    printf("To %s's surprise, a %s was hiding behind the tree.\n",
           noun1, noun2);

    printf("The two looked at each other for several seconds without saying "
           "a single word.\n");

    printf("Suddenly, the %s started %s as fast as possible.\n",
           noun2, verb1);

    printf("Without thinking twice, %s began %s after it.\n",
           noun1, verb2);

    printf("They ran across the road, through the grass, and all the way "
           "toward %s.\n",
           place1);

    printf("People nearby stopped what they were doing and stared at the "
           "strange scene in confusion.\n");

    printf("Nobody could understand why a %s and a %s were running around "
           "together that morning.\n",
           noun1, noun2);

    printf("After several minutes, both of them finally stopped to catch "
           "their breath.\n");

    printf("%s looked at the %s and realized that they were no longer "
           "afraid of each other.\n",
           noun1, noun2);

    printf("Instead, they had somehow become friends during their "
           "unexpected adventure.\n");

    printf("From that day forward, %s and %s met regularly at %s.\n",
           noun1, noun2, place1);

    printf("They explored new places, shared unforgettable adventures, "
           "and always found a way to make each other laugh.\n");

    printf("What started as a strange and confusing morning became one of "
           "the most memorable days of their lives.\n");

    printf("And whenever someone asked %s how the friendship began, "
           "%s would simply smile and say, \"It is a long story!\"\n",
           noun1, noun1);

    printf("\n========== THE END ==========\n");

    return 0;
}


#include <stdio.h>
#include <string.h>


int main(void) {

    char alphabetLetters[][150] = {
                                  "A","B","C","D",
                                  "E","F","G","H",
                                  "I","J","K","L",
                                  "Q","R","S","T",
                                };
    int sizes = sizeof(alphabetLetters) / sizeof(alphabetLetters[0]);
    for(int i = 0; i < sizes; i++) {
        
        printf("-->>%s ", alphabetLetters[i]);
    }
    printf("Size of the array: %d", sizes);

        

    return 0;
}
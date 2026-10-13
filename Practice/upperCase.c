#include <stdio.h>
#include <ctype.h>



int main(void) {

    int cont = 0;
    char words[] = "Welcome Home 101";

    for (int i = 0; words[i] != '\0'; i++) {
        if (isdigit(words[i])) {
            cont++;
        }
    }
    
    printf("This is the words--- %d", cont);
    return 0;
}
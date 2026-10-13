#include <stdio.h>
#include <string.h>



int main(void){ 

    char alphabetLetters[][30] = {
                                "Apple",
                                "Banna",
                                
                                "Lemon"
    };
    int size = sizeof(alphabetLetters) / sizeof(alphabetLetters[0]);
    for (int i = 0; i < size; i++){
        
        printf("%s\n", alphabetLetters[i
        ]);
    }
 
    return 0;


}


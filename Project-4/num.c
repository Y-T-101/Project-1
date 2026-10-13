#include <stdio.h>
#include <string.h>


int main(void) {

    int namesOfStudents[5];

    namesOfStudents[0] = 93;
    namesOfStudents[1] = 55;
    namesOfStudents[2] = 50;
    namesOfStudents[3] = 90;
    namesOfStudents[4] = 99;

    int agv = namesOfStudents[0] + namesOfStudents[1] + namesOfStudents[2] + namesOfStudents[3]+ namesOfStudents[4];
    float Total = agv / 5; 
    
    for (int i = 0; i < 4; i++) {
        
        printf("Number %d: %d\n", i+1, namesOfStudents[i]);

    }
    printf("The Total is: %02d", Total);
    return 0;  
}
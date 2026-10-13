#include <stdio.h>
#include <ctype.h>

struct  Students{ 
    char name[50];
    int age;
    float gpa;
};

int main(void)  {

    struct Students std1 = {"Uriah", 12, 2.5f};
    struct Students std2 = {"Favor", 11, 3.3f};
    printf("%s, %d, %lf", std2.name, std1.age, std1.gpa);
    return 0;
}
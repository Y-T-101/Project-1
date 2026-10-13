#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>



bool verifyPassword(char *pass);


int main(void)  {

    char pass[] = "Uriah12";
    bool result = verifyPassword(pass);
    if (result) {
        printf("password verify.");
    }
    else {
        printf("Password not verify");
    }


    return 0;
}

bool verifyPassword(char *pass) {

    int length = strlen(pass);
    if (length < 8) {
        return false;
    }

    bool hasUpper = false;
    bool hasLower = false;
    bool hasDigits = false;
    bool hassymbole = false;

    for (int i = 0; i < length; i++) {
        if (isdigit(pass[i])) hasDigits = true;
        if (isupper(pass[i])) hasUpper = true;
        if (islower(pass[i])) hassymbole = true;
    }

    return true;
}
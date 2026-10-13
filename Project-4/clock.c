/*Header file for the program*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>

/*Get function prototype*/
int getTime(int hours, int minutes, int seconds);

/*Main function of the program*/
int main(void) {

    /*initialize the variable to zero(0)*/
    int hours, minutes, seconds;
    hours = 0;
    minutes = 0;
    seconds = 0;

    /*Call or invoke the getTime function*/
    getTime(hours, minutes, seconds);

}

/*Get function*/
int getTime(int hours, int minutes, int seconds) {

    /*iterate the time very time */
    while (1) {
        system("clear"); /* Clear the loop */
        printf("%02d:%02d:%02d", hours, minutes, seconds); /*display the hours minutes and seconds*/
        fflush(stdin); /*This will help return the display every to not iterate the whole terminal*/

        seconds++; /*incurement the the loop*/

        /*condition for the time*/
        if (seconds == 60) { /* if seconds is 60 it will start over and rest then minuter will start*/
            minutes+=1; /*add one to the second every time it hit 60*/
            seconds=0; /*and reset the second to zero (0)*/
        }
        if (minutes == 60) { /* same process for the second */
            hours+=1;
            minutes=0;
        }
        if (hours == 24) { /* if hours hit 24 it will be one day*/
            hours=0; /* and reset the hours minutes and seconds*/
            minutes=0;
            seconds=0;
        }
        sleep(0.00001); /*sleep the iteration for one second for the loop to continue*/
    }
}
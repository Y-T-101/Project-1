#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

/*Function prototype*/

char winnerDetermination(char player, char computer);
char computerChoice();
char playerChoice();
void displayMenu();


int main(void) {

    srand(time(NULL));
    displayMenu();
  


    char player = playerChoice();
    char computer = computerChoice();

    
    printf("Player : %c\n", player);
    printf("Computer: %c\n", computer);
    
    winnerDetermination(player, computer);
    return 0;
}

void displayMenu() {
    printf("Welcome to the Rock Game \n");
    printf("1.Rock\n2.Paper\n3.Scissorn\n");
    
}
char computerChoice(){
    int randomNum = rand() % 3; /*Generate random number from 0 - 3*/
    if (randomNum == 0) {
        return 'R';
    }
    if (randomNum ==1) {
        return 'P';
    }
    return 'S';

}

char playerChoice() {
    int playerNum;

    printf("What is your choice: ");
    scanf("%d", &playerNum);

    if (playerNum == 1) {
        return 'R';
    }
    if (playerNum == 2) {
        return 'P';
    }
    return 'S';


}

char winnerDetermination(char player, char computer) {
        
        if ( (player == 'R' && computer == 'S') ||
            (player == 'S' && computer == 'P') || 
            (player == 'P' && computer == 'R') 
            )
        {
            printf("Player win the game..\n");
        }
        else {
            printf("Game Tie\n");
        }


}


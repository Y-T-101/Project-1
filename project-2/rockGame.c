#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

// Function prototypes
char get_computer_choice();
int determine_winner(char player, char computer);
void print_choice(char choice);

int main() {
    char player_choice;
    char computer_choice;
    char play_again;
    int player_score = 0;
    int computer_score = 0;

    // Seed the random number generator using the current time
    srand(time(NULL));

    printf("=========================================\n");
    printf("   Welcome to Rock, Paper, Scissors!    \n");
    printf("=========================================\n");

    do {
        // 1. Get and validate player choice
        while (1) {
            printf("\nEnter your choice (R for Rock, P for Paper, S for Scissors): ");
            scanf(" %c", &player_choice);
            player_choice = toupper(player_choice); // Convert to uppercase for uniformity

            if (player_choice == 'R' || player_choice == 'P' || player_choice == 'S') {
                break; // Valid input, exit validation loop
            }
            printf("Invalid choice! Please try again.\n");
        }

        // 2. Generate computer choice
        computer_choice = get_computer_choice();

        // 3. Display choices
        printf("\nYou chose: ");
        print_choice(player_choice);
        printf("Computer chose: ");
        print_choice(computer_choice);

        // 4. Determine and display round result
        int result = determine_winner(player_choice, computer_choice);
        if (result == 1) {
            printf("You win this round!\n");
            player_score++;
        } else if (result == -1) {
            printf("Computer wins this round!\n");
            computer_score++;
        } else {
            printf("It's a tie!\n");
        }

        // 5. Display current standings
        printf("\n[ Score ] You: %d | Computer: %d\n", player_score, computer_score);

        // 6. Ask to play again
        printf("\nDo you want to play another round? (Y/N): ");
        scanf(" %c", &play_again);
        play_again = toupper(play_again);

    } while (play_again == 'Y');

    printf("\n=========================================\n");
    printf("   Final Score - You: %d | Computer: %d\n", player_score, computer_score);
    printf("   Thanks for playing! Goodbye!\n");
    printf("=========================================\n");

    return 0;
}

// Generates a random choice of 'R', 'P', or 'S'
char get_computer_choice() {
    int random_num = rand() % 3; // Generates 0, 1, or 2
    if (random_num == 0) return 'R';
    if (random_num == 1) return 'P';
    return 'S';
}

// Determines the winner of the round
// Returns: 1 if player wins, -1 if computer wins, 0 for a tie
int determine_winner(char player, char computer) {
    if (player == computer) {
        return 0; // Tie
    }

    // Checking win conditions for the player
    if ((player == 'R' && computer == 'S') ||
        (player == 'P' && computer == 'R') ||
        (player == 'S' && computer == 'P')) {
        return 1; // Player wins
    }

    return -1; // Computer wins
}

// Helper function to cleanly print the choice word
void print_choice(char choice) {
    if (choice == 'R') printf("Rock 🪨\n");
    else if (choice == 'P') printf("Paper 📄\n");
    else if (choice == 'S') printf("Scissors ✂️\n");
}

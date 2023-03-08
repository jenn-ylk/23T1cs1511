// Week 3 COMP1511, 23T1
// A program using flag variables 
// and a counting while loop to create a guessing game

#include <stdio.h>

#define MY_NUMBER 17

void run_game(void) {
    int i = 0;
    int game_won = 0;
    // give the user 5 guesses
    int entered;
    while (game_won == 0 && i < 5) {
        printf("Guess a number between 0 and 500: ");
        scanf("%d", &entered);
        if (entered < MY_NUMBER ) {
            printf("Too low!\n");
        } else if (entered > MY_NUMBER) {
            printf("Too high!\n");
        } else {
            game_won = 1;
        }
        i++;
    }

    // Use the flag variable to say whether the user won or not
    if (game_won == 1) {
        printf("Congratulations! You won!\n");
    } else {
        printf("Sorry, you didn't guess the number, better luck next time");
    }
    printf("%d guesses used\n", i);
}

int main (void) {

    run_game();

    return 0;
}
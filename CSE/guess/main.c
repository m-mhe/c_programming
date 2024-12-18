#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number_to_guess, guess;

    // Initialize random number generator
    srand(time(0));

    // Computer selects a random number between 500 and 1000
    number_to_guess = (rand() % 501) + 500;

    printf("Welcome to the 'Guess the Number' game!\n");
    printf("The computer has selected a number between 500 and 1000.\n");

    do {
        // User input
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Check if guess is too high, too low, or correct
        if (guess > 1500) {
            printf("Your guess is too high! Try a lower number.\n");
        } else if (guess < 200) {
            printf("Your guess is too low! Try a higher number.\n");
        } else if (guess > number_to_guess) {
            printf("Too high! Try again.\n");
        } else if (guess < number_to_guess) {
            printf("Too low! Try again.\n");
        } else {
            printf("Congratulations! You've guessed the correct number: %d\n", number_to_guess);
        }

    } while (guess != number_to_guess);

    return 0;
}

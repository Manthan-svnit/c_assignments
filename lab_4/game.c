#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int luckyNumber, guess;
    int attempts = 5;

    // Seed the random number generator
    srand(time(0));

    // Pick a lucky number between 1 and 100
    luckyNumber = rand() % 100 + 1;

    // Give the user 5 attempts to guess the number
    for (int i = 1; i <= attempts; i++) {
        printf("Attempt %d/%d: Guess the lucky number (between 1 and 100): ", i, attempts);
        scanf("%d", &guess);

        // Check if the guess is correct
        if (guess == luckyNumber) {
            printf("Congratulations! %d is the lucky number.\n", guess);
            break;
        } else {
            // Use the conditional (ternary) operator to give a hint
            printf("Wrong guess! Your guess is too %s.\n", (guess > luckyNumber) ? "high" : "low");
        }
    }

    // If all attempts are used without success
    if (guess != luckyNumber) {
        printf("Sorry! The lucky number was %d. Better luck next time.\n", luckyNumber);
    }

    return 0;
}

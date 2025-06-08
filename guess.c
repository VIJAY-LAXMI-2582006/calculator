#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(0));

    // Generate a random number between 1 and 100
    int number = rand() % 100 + 1;
    int guess;
    int attempts = 0;  // Initialize attempts counter

    printf("Welcome to the Number Guessing Game!\n");

    while (1) {
        printf("Enter your guess (1-100): ");
        scanf("%d", &guess);
        attempts++;  // Increment attempts each time user guesses

        if (guess == number) {
            printf("congratulations!...YOU WIN THE GAME in %d attempts!\n", attempts);
            break;  // Exit the loop when correct
        } else if (guess < number) {
            printf("Too low! Try again.\n");
        } else {
            printf("Too high! Try again.\n");
        }
    }

    return 0;
}

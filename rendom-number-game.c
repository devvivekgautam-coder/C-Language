#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int secret, guess, tries = 10;

    srand(time(NULL));
    secret = (rand() % 100) + 1;

    printf("I have a number between 1 and 100.\n");
    printf("You have %d tries to guess it!\n\n", tries);

    for (int i = 1; i <= tries; i++) {
        printf("Try %d: Enter your guess: ", i);
        scanf("%d", &guess);

        if (guess == secret) {
            printf("Right! 🎉 You guessed correctly.\n");
            return 0; 
        } else {
            int diff = abs(secret - guess);
            if (diff <= 10) {
                printf("Wrong! But you are closer.\n");
            } else {
                printf("Wrong! You are far.\n");
            }
        }
    }

    printf("\nGame Over! The correct number was %d.\n", secret);

    return 0;
}

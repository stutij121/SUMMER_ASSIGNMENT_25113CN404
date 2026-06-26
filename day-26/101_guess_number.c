#include <stdio.h>

int main()
{
    int number = 25;   // Fixed number to guess
    int guess;
    int attempts = 0;

    printf("Guess the number between 1 and 50.\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);

        attempts++;

        if(guess > number)
        {
            printf("Too High!\n");
        }
        else if(guess < number)
        {
            printf("Too Low!\n");
        }
        else
        {
            printf("Congratulations! You guessed the number.\n");
            printf("Attempts = %d\n", attempts);
        }

    } while(guess != number);

    return 0;
}
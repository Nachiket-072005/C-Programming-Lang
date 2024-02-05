#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int number, guess, nguesses = 1;
    srand(time(0));
    number = rand() % 100 + 1; // Generates random number between from 1 to 100
    // printf("The value of random number is %d\n", number);
    // Keep runnning the loop until the number is guessed.
    do
    {
        printf("Guess the number between 1 - 100 : \n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Lower number please!\n");
        }
        else if (guess < number)
        {
            printf("Higher number please!\n");
        }
        else
        {
            printf("You guessed it in %d attempts\n", nguesses);
        }
        nguesses++;
    } while (guess != number);

    return 0;
}
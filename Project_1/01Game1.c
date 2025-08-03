#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int randomNumber;
    int guessedNumber;
    int no_of_times = 0;

    // Initialize random seed
    srand(time(0));

    // Generate a random number between 1 and 100
    randomNumber = (rand() % 100) + 1;

    do
    {
        printf("Guess the Number:\n");
        scanf("%d", &guessedNumber);
        if (guessedNumber > randomNumber)
        {
            printf("Guessed number is greater than the random number!\n");
        }
        if (guessedNumber < randomNumber)
        {
            printf("Guessed number is smaller than the random number!\n");
        }
        no_of_times++;

    } while (guessedNumber != randomNumber);
    
    printf("Congrats!!!\n");
    printf("You Guessed the Number in %d Guesses.", no_of_times);
    return 0;
}

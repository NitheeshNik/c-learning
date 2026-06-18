#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int targetNumber, userGuess, attempts = 0;

    srand(time(NULL));

    targetNumber = rand() % 10 + 1;

    printf("%d\n", targetNumber);
    printf("NUMBER GUSSING GAME\n");
    do
    {
        printf("Enter your number: \n");

        scanf("%d", &userGuess);
        attempts++;

        if (targetNumber > userGuess)
        {
            printf("Too high! Try again.\n");
        }
        else if (targetNumber < userGuess)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Congratulations! You guessed the correct number in %d attempts.\n");
        }
    } while (userGuess != targetNumber);

    return 0;
}
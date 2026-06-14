#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int number;
    int guess;
    srand(time(NULL));
    number = rand() % 11;
    printf("%d\n", number);
    do
    {
        printf("Enter your number: ");
        scanf("%d", &guess);

        if (guess > number)
        {
            printf("Too high! Try again.\n");
        }
        else if (guess < number)
        {
            printf("Too low! Try again.\n");
        }
        else
        {
            printf("Congratulations! You got it.\n");
        }

    } while (guess != number);

    return 0;
}
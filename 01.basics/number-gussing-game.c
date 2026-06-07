#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // NUMBER GUESSING GAME
    printf("NUMBER GUESSING GAME\n");

    // Seed the random number generator
    srand(time(NULL));

    // FIX 1: Set correct ranges where max is greater than min
    int min = 10;
    int max = 50;

    // FIX 2: Use an int variable instead of a char array for easy math comparison
    int userGuess;

    // Calculate the random number between min and max (inclusive)
    int randomNum = (rand() % (max - min + 1)) + min;

    // Line for testing: uncomment if you want to cheat and see the answer
    // printf("(Cheat sheet hidden number: %d)\n", randomNum);

    // FIX 3: Use %d to securely read an integer from the user
    printf("Enter a number between %d and %d: ", min, max);
    scanf("%d", &userGuess);

    // FIX 4: Securely compare the two integers
    if (randomNum == userGuess)
    {
        printf("Answer is correct!\n");
    }
    else
    {
        printf("Wrong answer! The correct number was: %d\n", randomNum);
    }

    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int x = 0;
    int guess = 0;

    printf("NUMBER GUSSING GAME\n");
    srand(time(NULL));

    x = rand() % 10;
    printf("%d\n", x);
    printf("Enter your number: \n");
    scanf("%d", &guess);
    if (x > guess)
    {
        printf("Higer");
    }
    else if (x < guess)
    {
        printf("Lower");
    }
    else
    {
        printf("You win");
    }

    return 0;
}
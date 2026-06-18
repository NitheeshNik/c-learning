#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    // ROCK PAPER SCISSORS
    srand(time(NULL));
    int computerChioce, rock = 0, paper = 1, scissors = 2, attempt = 0, userGuess;

    computerChioce = rand() % 3;

    printf("%d", computerChioce);

    printf("Enter your guess rock=0,paper=1,scissors=3: ");

    scanf("%d", &userGuess);

    if (computerChioce > userGuess)
    {
        printf("you win");
    }
    else if ()
        return 0;
}
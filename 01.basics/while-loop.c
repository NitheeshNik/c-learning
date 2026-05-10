#include <stdio.h>

int main()
{
    // while loop = Continue some code WHILE the condition remains true
    //              Condition must be true for us to enter while loop
    int number = 0;
    int num1 = 1; // do while

    while (number <= 0)
    {
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
    }

    // do while loop
    do
    {
        printf("Enter a number greater than 1: ");
        scanf("%d", &num1);
    } while (num1 <= 1);

    return 0;
}
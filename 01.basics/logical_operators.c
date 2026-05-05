#include <stdio.h>
#include <stdbool.h>
int main()
{

    // logical operators = Used to combine or modify boolean expressions.

    // && = AND
    // || = OR
    // ! = NOT

    int temp = 10000000;

    if (temp > 0 && temp < 30) // AND
    {
        printf("The temperature is GOOD");
    }

    else
    {
        printf("The temperature is BAD");
    }

    // OR
    int temp1 = -5;
    if (temp1 <= 0 || temp1 >= 30) // AND
    {
        printf("The temperature is BAD");
    }

    else
    {
        printf("The temperature is GOOD");
    }

    // NOT
    bool isSunny = true;

    if (!isSunny) // NOT operator working like opposite
    {
        printf("It is CLOUDY outside");
    }
    else
    {
        printf("It is  SUNNY  outside");
    }
    return 0;
}
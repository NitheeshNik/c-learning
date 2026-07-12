#include <stdio.h>

int main()
{
    int pattern = 0;
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= i; j++)
        {

            printf("%d", i);
        }
        printf("\n");
    }

    return 0;
}
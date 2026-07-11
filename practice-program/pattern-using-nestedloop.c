#include <stdio.h>

int main()
{
    int patter = 0;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 0; j <= 5; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    return 0;
}
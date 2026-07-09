#include <stdio.h>

int main()
{
    int patter = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; i < i; j++)
        {
            printf("%d", j);
        }
    }
    return 0;
}
#include <stdio.h>

int main()
{
    // continue = Skip current cycle of a loop (SKIP)
    printf("CONDITION");
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        printf("%d\n", i);
    }
    return 0;
}

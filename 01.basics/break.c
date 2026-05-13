#include <stdio.h>

int main()
{
    // break = Break out of a loop (STOP)
    for (int i = 1; i <= 10; i++)
    {
        if (i == 4)
        {
            break;
        }

        printf("%d\n", i);
    }
    return 0;
}

#include <stdio.h>
// include <windows.h> for windows
#include <unistd.h> // for linux / mac

int main()
{
    // for loop = Repeat some code a limited # of times
    //            for(Initialization; Condition; Update)

    for (int i = 1; i < 10; i += 2) // also use i++
    {
        printf("%d\n", i);
    }

    for (int i = 10; i >= 0; i -= 3) // also use i--
    {
        printf("%d\n", i);
    }
    printf("New year wish\n");
    for (int i = 10; i >= 0; i--)
    {
        sleep(1); // of you use window S is capitel and ms = millesecond  1 = 1000
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!\n");
    return 0;
}
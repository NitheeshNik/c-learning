#include <stdio.h>

// Local scope
// Global scope

int result = 0; // GLOBAL SCOPE ( hard to dubug)

int add(int x, int y)
{                       // add is a funciton
    int result = x + y; // another way to write (return x + y; )
    return result;
}

int subtract(int x, int y)
{                       // add is a funciton
    int result = x - y; // another way to write (return x + y; ) ((x and y is a local scope))
    return result;      // the variable or local scope
}

int main()
{

    // variable scope = Refers to where a variable is recognized and accessible.
    //                  Variables can share the same name if
    //                  they're in different scopes{}

    int result = subtract(4, 2);

    printf("%d\n", result);

    return 0;
}
#include <stdio.h>

int main()
{

    printf("******HANGMAN GAME******\n");
    int x = 10;
    int *ptr = &x; // The '&' operator gets the physical RAM address of x
    printf("The value of x is %d, and it lives at memory address %p", x, ptr);

    return 0;
}
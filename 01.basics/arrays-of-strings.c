#include <stdio.h>

int main()
{
    char fruits[][10] = {"Apple", "Banana", "Coconut"};
    //  To accesing a each character
    fruits[0][0] = 'e';
    fruits[0][4] = 'A';

    for (int i = 0; i < sizeof(fruits) / sizeof(fruits[0]); i++)
    {
        printf("%s\n", fruits[i]);
    }

    return 0;
}
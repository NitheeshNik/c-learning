#include <stdio.h>

int main()
{
    // array = A fixed-size collection of elements of the same data type
    //         (Similar to a variable, but it holds more than 1 value)

    int numbers[] = {10, 20, 30, 40, 50};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Bro Code";

    // If want to change array element
    numbers[0] = 100;
    printf("%d\n", numbers[0]);

    // If you want to list all element using loop
    for (int i = 0; i < 5; i++)
    {
        printf("%c ", grades[i]);
    }

    // USING *sizeof* for auto adjest the array len to print a loop don't want to touch loop
    // sizeof will showing the bytes of the value and take individual number byte and divide and get the lenght

    /*
    method 1
    int size = sizeof(numbers) / sizeof(numbers[0]);
    */

    // method 2
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++)
    {
        printf(" %d ", numbers[i]);
    }
    return 0;
}
#include <stdio.h>

// If you use typedef compine with enum you don't want to reenter the enum in main function

typedef enum Day
{
    SUNDAY = 1,
    MONDAY = 2,
    TUESDAY = 3,
    WEDNESDAY = 4,
    THURSDAY = 5,
    FRIDAY = 6,
    SATURDAY = 7
} Day;

int main()
{
    // enum = A user-defined data type that consists
    //        of a set of named integer constants.
    //        Benefit: Replaces numbers with readable names

    Day today = MONDAY;

    if (today == SUNDAY || today == SATURDAY)
    {
        printf("It's the weekend\n");
    }
    else
    {
        printf("It's a weekday\n");
    }

    return 0;
}
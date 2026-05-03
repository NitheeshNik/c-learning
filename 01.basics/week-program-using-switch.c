#include <stdio.h>

int main()
{
    int dayinweek = 0;
    printf("Enter the number (1-7): ");
    scanf("%d", &dayinweek);

    switch (dayinweek)
    {
    case 1:
        printf("It is Monday\n");
        break;
    case 2:
        printf("It is Tusday\n");
        break;
    case 3:
        printf("It is Wednesday\n");
        break;
    case 4:
        printf("It is Thursday\n");
        break;
    case 5:
        printf("It is Friday\n");
        break;
    case 6:
        printf("It is Saturday\n");
        break;
    case 7:
        printf("It is Sunday\n");
        break;
    default:
        printf("Enter the valid number (1-7)\n");
        break;
    }
    return 0;
}
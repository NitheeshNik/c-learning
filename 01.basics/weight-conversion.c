#include <stdio.h>

int main()
{
    double kg = 0.0;
    double lb = 0.0;
    int choice;

    printf("Weight Conversion Calculator\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1)
    {
        printf("Enter kg: ");
        scanf("%lf", &kg);
        kg *= 2.205;
        printf("%lf\n", kg);
    }
    else
    {
        printf("Enter your lb: ");
        scanf("%lf", &lb);
        lb *= 0.451;
        printf("%lf\n", lb);
    }

    return 0;
}
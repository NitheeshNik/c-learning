#include <stdio.h>

int main()
{
    float c = 0;
    float f = 0.0;
    char choice;
    printf("Temperature Conversion Program\n");
    printf("C. Celsius to Fahrenheit\n");
    printf("F. Fahrenheit to Celsius\n");
    printf("Is the temp in Celsius (C) or Fahrenheit (F)?: ");
    scanf(" %c", &choice);
    if (choice == 'c' || choice == 'C')
    {
        printf("Enter the temperature in Celsius: ");
        scanf("%f", &c);
        f = c * 9 / 5 + 32;
        printf("%.2f\u00B0C Celsius is equal to %.2f\u00B0F Fahrenheit\n", c, f);
    }
    else if (choice == 'f' || choice == 'F')
    {
        printf("Enter the temperature in fahrenheit: ");
        scanf("%f", &f);
        c = (f - 32) * 5 / 9;
        printf("%.2f\u00B0F fahreheit is equal to %f\u00B0C Celsius\n", f, c);
    }
    else
    {
        printf("Invalid choice!\n");
    }
    return 0;
}
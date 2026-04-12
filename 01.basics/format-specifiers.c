#include <stdio.h>

int main()
{
    // Format specifier = Special tokens that begin with a % symbol,
    //                     followed by a character that specifies the data type
    //                     and optional modifiers (width, precision, flags).
    //                     They control how data is displayed or interpreted.

    int age = 25;
    float price = 19.99;
    double pi = 3.14159226535;
    char currency = '$';
    char name[] = "nitheesh";

    printf("%d\n", age); // d means decimal
    printf("%f\n", price);
    printf("%lf\n", pi); // %f also work.
    printf("%c\n", currency);
    printf("%s\n\n", name);

    // Optional modifiers
    // width

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;

    printf("%d\n", num1); //
    printf("%4d\n", num2);
    printf("%-4d\n\n", num3);

    // precision

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    printf("%.2f\n", price1);   // If you want to show only 2 decimals ofter the dot. we use .2.
    printf("%+7.2f\n", price2); // You set the minimum width. (+ = only apply the positive numbers only)
    printf("%+.2f\n", price3);
    return 0;
}
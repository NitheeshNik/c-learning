#include <stdio.h>

int main()
{
    // variable = A reusable container for a value.
    //              Behaves as if it were the value it contains.
    int age = 25;
    int year = 2026;
    int quantity = 1;
    // float
    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;
    // double
    double pi = 3.12344341212312;
    double e = 2.7182818284590;

    // character
    char grade = 'A';
    char symbol = '#';
    char currecy = '$';

    // C can't have string alternative we use (arrays of characters)
    char name[] = "mother";
    char food[] = "pizza";
    char email[] = "fake123@gmail.com";

    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);
    printf("You are %d years old\n\n", age);
    // float
    printf("Your gpa is %.1f \n", gpa);
    printf("The price is $%.2f\n", price);
    printf("The temperature is %f\u00b0F\n\n", temperature);
    // double
    printf("The value of pi is %.15lf\n", pi); //%lf = long float
    printf("The value of e is %.15lf\n\n", e);

    // char
    printf("Your grade is %c\n", grade);
    printf("Your favorate symbol is %c\n", symbol);
    printf("The currency is %c\n\n", currecy);

    // strings or array of characters
    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n", email);
    return 0;
}
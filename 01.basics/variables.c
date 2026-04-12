#include <stdio.h>
#include <stdbool.h> // If you want to work with bool must use this header file
int main()
{
    // variable = A reusable container for a value.
    //              Behaves as if it were the value it contains.

    // C can't have string alternative we use (arrays of characters)

    // variable = A reusable container for a value.
    //            Behaves as if it were the value it contains.

    // int = whole numbers (4 bytes in modern systems)
    // float = single-precision decimal numberI(4 bytes)
    // double = double-precision decimal number (8 bytes)
    // char = single character (1 byte)
    // char[] = array of characters (size varies)
    // bool = true or false (1 byte, requires <stdbool.h>)

    int age = 25;
    int year = 2026;
    int quantity = 1;

    printf("The year is %d\n", year);
    printf("You have ordered %d x items\n", quantity);
    printf("You are %d years old\n\n", age);

    // float
    float gpa = 2.5;
    float price = 19.99;
    float temperature = -10.1;
    // float
    printf("Your gpa is %.1f \n", gpa);
    printf("The price is $%.2f\n", price);
    printf("The temperature is %f\u00b0F\n\n", temperature);

    // double
    double pi = 3.12344341212312;
    double e = 2.7182818284590;
    // double
    printf("The value of pi is %.15lf\n", pi); //%lf = long float
    printf("The value of e is %.15lf\n\n", e);

    // character
    char grade = 'A';
    char symbol = '#';
    char currecy = '$';

    // char
    printf("Your grade is %c\n", grade);
    printf("Your favorate symbol is %c\n", symbol);
    printf("The currency is %c\n\n", currecy);
    // String
    char name[] = "mother";
    char food[] = "pizza";
    char email[] = "fake123@gmail.com";

    // strings or array of characters
    printf("Hello %s\n", name);
    printf("Your favorite food is %s\n", food);
    printf("Your email is %s\n\n", email);

    // bool is (True or False)
    bool isOnline = false; // Do you use (true or false) or (0=false and 1 = true )
    if (isOnline)
    {
        printf("You are ONLINE\n");
    }
    else
    {
        printf("You are OFFLINE\n");
    }

    return 0;
}
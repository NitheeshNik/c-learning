#include <stdio.h>
#include <stdbool.h>

int main()
{
    // ternary operator ? = shorthand for if-else statements

    // (condition) ? value_if_true : value_if_false;

    int x = 7;
    int y = 6;
    int max = (x > y) ? x : y;

    printf("%d\n", max);
    // boolinan ex
    bool isonline = true;
    printf("%s\n", (isonline) ? "online" : "offline");

    // odd or evern
    int number = 9;

    printf("%d is %s\n", number, (number % 2 == 0) ? "even" : "odd");

    // age check
    int age = 12;

    printf("%s\n", (age > 18) ? "adult" : "child");

    // time check am or pm using pointer  * = pointer

    int hours = 11;
    int minutes = 30;
    char *meridiem = (hours < 12) ? "AM" : "PM";

    printf("%02d:%02d %s", hours, minutes, meridiem);
    return 0;
}
#include <stdio.h>
#include <stdbool.h>

int getMax(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
bool ageCheck(int age)
{
    if (age >= 18)
    {
        return true;
    }
    else
    {
        return false;
    }
}
// ex 1
double cube(double num)
{
    return num * num * num;
}
// ex 2
double square(double num)

{

    return num * num;
}

int main()
{
    // return = returns a value back to where you call a fuction

    double x = square(2);
    double y = square(3);
    double z = square(4);

    printf("%lf\n", y);
    printf("%lf\n", x);
    printf("%lf\n", z);

    int age = 21;

    if (ageCheck(age))
    {
        printf("You may sing up\n");
    }
    else
    {
        printf("You must be 18+ to sign up\n");
    }

    int max = getMax(2, 3);

    printf("%d\n", max);

    return 0;
}
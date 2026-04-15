#include <stdio.h>
#include <math.h>

int main()
{
    int principal = 0;       // P (initial money)
    float interest_rate = 0; // r (annual interest rate)
    int years = 0;           // t
    int timesCompounded = 0; // n
    char per = '%';
    double amount = 0.0;

    printf("Enter the pricipal (P): ");
    scanf("%d", &principal);
    printf("Enter the interest rate %c (r): ", per);
    scanf("%f", &interest_rate);
    printf("Enter the # of years (t): ");
    scanf("%d", &years);
    printf("Enter # of times compounded per year (n): ");
    scanf("%d", &timesCompounded);
    interest_rate = interest_rate / 100;

    amount = principal * pow((1 + interest_rate / timesCompounded), timesCompounded * years);
    printf("After %d year, the total will be $%.2lf\n", years, amount);
    return 0;
}
#include <stdio.h>

int main()
{
    printf("------BMI CALCULATOR------\n");
    float height;
    float weight;
    printf("Enter your height: ");
    scanf("%f", &height);
    printf("Enter your weight: ");
    scanf("%f", &weight);
    float bmi = weight / (height * height);
    printf("Your BMI is %.2f\n", bmi);

    return 0;
}
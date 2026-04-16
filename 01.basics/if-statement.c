#include <stdio.h>
#include <stdbool.h>

int main()
{
    // if statement = Do some code if a condition is true.
    //                If the condition is false, don't do it.
    int age = 0;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 65)
    {
        printf("You are a senior\n");
    }
    else if (age >= 18)
    {
        printf("Your are adult\n");
    }
    else if (age < 0)
    {
        printf("You haven't been born yet\n");
    }
    else if (age == 0)
    {
        printf("You are a new born\n");
    }
    else
    {
        printf("Your are a child\n");
    }

    // STUDENT CODE
    bool isStudent = true;
    printf("Enter you student or not(1 = true or 0 = false):");
    scanf("%d", &isStudent);

    if (isStudent)
    {
        printf("You are a student\n");
    }
    else
    {
        printf("You are NOT a student\n");
    }

    return 0;
}
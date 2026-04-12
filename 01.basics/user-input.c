#include <stdio.h>
#include <string.h>
int main()
{
    int age = 0;
    float gpa = 0.0f;
    char grade = '\0'; // \0 is a null terminator
    char name[30] = "";
    char name1[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age); // & is called address of operator.

    printf("Enter your gpa:");
    scanf("%f", &gpa);

    printf("Enter your grade: ");
    scanf(" %c", &grade);

    printf("Enter your first name: ");
    scanf("%s", name); // It will not consider the space so you can't type your full name like (nitheesh kumar)

    getchar(); // Help to avoide a buffer.
    printf("Enter your full name: ");
    fgets(name1, sizeof(name1), stdin);
    name[strlen(name) - 1] = '\0';

    printf("%d\n", age);
    printf("%.2f\n", gpa);
    printf("%c\n", grade);
    printf("%s\n", name);
    printf("%s\n", name1);

    return 0;
}
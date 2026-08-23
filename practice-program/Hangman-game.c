#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char name;
    char arr[4][20] = {"cat", "dog", "cow", "pig"};
    printf("%s", arr[0]);
    printf("enter user name: ");
    scanf("%s", &name);
    return 0;
}
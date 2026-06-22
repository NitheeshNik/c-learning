#include <stdio.h>

typedef int number;
int main()
{

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           Helps simplify complex types and improves code readability

    // typedef existing_type new_name;

    number value = 5;
    number value1 = 2;
    number total = value + value1;
    printf("%d", total);

    return 0;
}
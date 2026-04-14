#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    // built in function squire root
    // during compiletion must add -lm flag on gcc command end.
    // Every time using math header file must use -lm flag.

    float x = 3;

    // x = sqrt(x); built in function squire root 3 (int)
    // x = pow(x, 4); (9*9*9*9) (int)
    // x = round(x); output 3.000000 round the value (float) 3.14
    // x = ceil(x); round up value 4.000000 (float) 3.14
    // x = floor(x); round down value 3.000000 (float) 3.14
    // x = abs(x); absolute value function (int) value -3
    // x = log(x); logarithm float value 3.

    // x = sin(x);
    // X = cos(x);
    // x = tan(x);

    printf("%f\n", x);

    return 0;
}
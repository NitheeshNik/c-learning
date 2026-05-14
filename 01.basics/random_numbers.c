#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{

    // Pseudo-random = Appear random but are determined by a
    //                 mathematical formula that uses a seed value
    //                 to generate a predictable sequence of numbers.
    //                 advanced: Mersenne Twister or /dev/random
    srand(time(NULL));

    return 0;
}
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

    int min = 100;
    int max = 50;
    // printf("%d\n", RAND_MAX); // rand() also use this.

    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d", randomNum1, randomNum2, randomNum3);

    return 0;
}
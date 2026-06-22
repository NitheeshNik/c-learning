#include <stdio.h>

int main()
{
    // 2D array(Multi dimestional arrays) = An array where each element is an array
    //             array[][] = {}, 0, {}};
    // 2D array for grate for matrix and grid(rows & colums)

    // grid exaple(matrix)
    int number[][3] = {{1, 2, 3},
                       {4, 5, 6},
                       {7, 8, 9},
                       {10, 20, 30}};

    // ** printf("%d ", number[0][0]); ** // first []- row second [] - colume
    // (THIS IS MANUAL WAY TO PRINT)

    // USING LOOP
    for (int i = 0; i < 4; i++)
    { // row
        for (int j = 0; j < 3; j++)
        { // columns
            printf("%d ", number[i][j]);
        }
        printf("\n");
    }

    printf("\n");
    char numpad[][3] = {{'1', '2', '3'},
                        {'4', '5', '6'},
                        {'7', '8', '9'},
                        {'*', '0', '#'}};

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", numpad[i][j]);
        }
        printf("\n");
    }
}
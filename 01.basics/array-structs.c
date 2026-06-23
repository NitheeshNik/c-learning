#include <stdio.h>

typedef struct
{
    char model[25];
    int year;
    int price;
} car;

int main()
{
    // array of structs = Array where each element contains a struct {}
    //                    Helps organize and groups together related data

    car cars[] = {{"Mstang", 2025, 32000},
                  {"Corvette", 2026, 68000},
                  {"Challenger", 2024, 29000}};
    int number = sizeof(cars) / sizeof(cars[0]);
    printf("%d\n", number);
    for (int i = 0; i < 3; i++)
    {
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[9].price);
    }

    // printf("%s %d $%d\n", cars[1].model, cars[1].year, cars[1].price);
    // printf("%s %d $%d\n", cars[2].model, cars[2].year, cars[2].price);
    return 0;
}
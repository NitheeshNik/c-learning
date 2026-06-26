#include <stdio.h>

int main()
{
    // WRITE A FILE

    FILE *pFile = fopen("\\wsl.localhost\\Ubuntu-22.04\\home\\knith\\output.txt", "w");

    char text[] = "Nik nik Nik\nRockIN' Everywhere!";

    if (pFile == NULL)
    {
        printf("Error opening file\n");
        return 1;
    }

    fprintf(pFile, "%s", text);

    printf("File was written successfully!\n");
    return 0;
}
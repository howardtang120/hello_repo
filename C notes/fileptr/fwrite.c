#include <stdio.h>
#include <stdlib.h>

int cat(FILE *file);

int main() {
    FILE *fp = fopen("test.txt", "w");      //"w" will overwrite the original file
    if (fp == NULL)                         //"a" will append new data to file
    {
        fclose(fp);
        printf("Could not create %s.\n", "test.txt");
        return 3;
    }

    char arr[10] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0'};

    for (int i = 0; i < 10; i++)
    {
        fwrite(&arr[i], 1, 1, fp);
    }
    printf("The size of the file is %ld bytes.\n", ftell(fp));  //ftell() returns the current position of the file pointer in bytes

    fclose(fp);
}


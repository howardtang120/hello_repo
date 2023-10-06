#include <stdio.h>
#include <stdlib.h>

int cat(FILE *file);

int main() {
    FILE* fp = fopen("test.txt", "r");
    if(fp == NULL)
    {
        printf("Error!");
        exit(1);
    }                                       //fread remembers the last location

    char c;
    for (int i = 0; i < 10; i++)
    {
        fread(&c, sizeof(char), 1, fp);
        printf("%c", c);
    }

    printf("\n");

    fseek(fp, 2, SEEK_SET);                 //relative to start of file
    fread(&c, sizeof(char), 1, fp);
    printf("%c\n", c);


    fseek(fp, 2, SEEK_CUR);                 //relative to current read location
    fread(&c, sizeof(char), 1, fp);
    printf("%c\n", c);


    fseek(fp, -2, SEEK_END);                //relative to end of file
    fread(&c, sizeof(char), 1, fp);
    printf("%c\n", c);


    //cat(fp);
    fclose(fp);
}

int cat(FILE *file)
{
    char ch;
    while ((ch = getc(file)) != EOF)        //reads everything until End Of File
    {
        printf("%c", ch);
    }
    printf("\n");
    return 0;
}
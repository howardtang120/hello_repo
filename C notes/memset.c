#include <stdio.h>
#include <string.h>

int main()
{
    int arr[5];                         
    memset(arr, 1, sizeof(arr));        //(void *str, int c, size_t n) --> (1st address, value, times)
                                        //note that "int c"^ actually becomes an "unsigned int" of 1 byte
    for (int i = 0; i < 5; i++)         //sets memory to 'value' in intervals of 1 byte
    {
        printf("%d, ", arr[i]);         //outputs 16843009, 16843009, 16843009, 16843009, 16843009,
    }
    printf("\n");                       //because "0b 00000001 00000001 00000001 00000001" == 16843009

    char chars[5];
    memset(chars, 1, sizeof(chars));
    for (int i = 0; i < 5; i++)
    {
        printf("%d, ", chars[i]);       //outputs 1, 1, 1, 1, 1,
    }
    printf("\n");
}

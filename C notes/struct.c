#include <stdio.h>
#include <stdlib.h>

typedef struct inner
{
    int rating;
    char *color;
} inner;

typedef struct outer
{
    int index;
    char *name;
    inner inner_struct;
} outer;

int main()
{
    outer my_outer = {
        .index = 1,
        .name = "example",
        .inner_struct = {
            .rating = 5,
            .color = "red"}};

    printf("Outer struct:\n");                             //Outer struct:
    printf("index: %d\n", my_outer.index);                 //index: 1
    printf("name: %s\n", my_outer.name);                   //name: example
    printf("\n\n");
    printf("Inner struct:\n");                              //Inner struct:
    printf("rating: %d\n", my_outer.inner_struct.rating);   //rating: 5
    printf("color: %s\n", my_outer.inner_struct.color);     //color: red
}

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

    printf("Outer struct:\n");
    printf("index: %d\n", my_outer.index);
    printf("name: %s\n", my_outer.name);
    printf("\n\n");
    printf("Inner struct:\n");
    printf("rating: %d\n", my_outer.inner_struct.rating);
    printf("color: %s\n", my_outer.inner_struct.color);
}

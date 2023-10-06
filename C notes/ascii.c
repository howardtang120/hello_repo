#include <stdio.h>

int main() {
    char fruit[8] = "apples";

    printf("%s to ", fruit);

    fruit[0] += 14;     // 'a'  --> 'o'
    fruit[1] += 2;      // 'p'  --> 'r'
    fruit[2] -= 15;     // 'p'  --> 'a'
    fruit[3] += 2;      // 'l'  --> 'n'
    fruit[4] += 2;	    // 'e'  --> 'g'
    fruit[5] -= 14;	    // 's'  --> 'e'
    fruit[6] += 115;    // '/0' --> 's'
    fruit[7] = 0;       // adds 'nul' to the string

    printf("%s\n", fruit);      // prints oranges

    return 0;
}

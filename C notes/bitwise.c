#include <stdio.h>

void printBinary(int num) {
    int bytes = 4;
    
    unsigned int mask = 1<<(8*bytes-1);      //create a mask with only a single "1" bit
    printf("Mask %d\n\n", mask);
    printf("%d in binary is:\n", num);

    for (int i=0; i<bytes; i++){            //2 bytes
        for (int j=0; j<8; j++){        //8 bits
            if (num & mask) {           //check if the "1" bit matches the 
                printf("1");
            } else {
                printf("0");
            }
            mask >>= 1; // Right-shift the mask to check the next bit
        }
        printf(" ");
    }
}

int main() {
    int num = 266;                //00000000 00000000 00000001 00001010
    printBinary(num);
    printf("\n\nreturn 0");
}

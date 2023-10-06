#include <stdio.h>

void printBinary(int num) {
    int bytes = 4;
    
    unsigned int mask = 1<<(8*bytes-1);      //create a mask with only a single "1" bit
                                            //use unsigned int, otherwise negative numbers use arithmetic shift
                                            //which fills in "1" from the left side
    printf("Mask %d\n\n", mask);
    printf("%d in binary is:\n", num);

    for (int i=0; i<bytes; i++){        //4 bytes
        for (int j=0; j<8; j++){            //8 bits per byte
            if (num & mask) {           //Since the mask only contains a single "1" bit
                printf("1");                //and everything else is "0"
            } else {                        //the "&" and bitwise can be used to check
                printf("0");                //if the corrosponding bit is a "1"
            }
            mask >>= 1;                 // Right-shift the mask to check the next bit
        }
        printf(" ");
    }
}

int main() {
    int num = 266;                //00000000 00000000 00000001 00001010
    printBinary(num);
    printf("\n\nreturn 0");
}

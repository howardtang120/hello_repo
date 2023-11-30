#include <stdio.h>
#include <stdbool.h>


void print_fibonacci(int n){
    n += 1;
    
    int arr[]= {1, 1};
    bool a = true;

    for (int i=1; i<n && i<3; i++){
        printf("%d: %d\n", i, arr[i-1]);
    }

    for (int i=3; i<n; i++){
        a = !a;                        //changes the value between 0 and 1 each loop
        arr[a] += arr[!a];            // Can be used to access alternating data
        printf("%d: %d\n", i, arr[a]);    // Or call alternating functions, like Minimax
    }
}

int main()
{
    int n = 20;
    print_fibonacci(n);
}

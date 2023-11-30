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
        a = !a;
        arr[a] += arr[!a];
        printf("%d: %d\n", i, arr[a]);
    }
}

int main()
{
    int n = 20;
    print_fibonacci(n);
}

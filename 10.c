#include <stdio.h>

int factorial(int n) {
    if(n == 0) {
        return 1;
    }
    else {
        return n * factorial(n-1);
    }
}

void main(void) {
    int n;
    printf("Enter the numder ");
    scanf("%d", &n);
    printf("Answer is: %d", factorial(n));
}
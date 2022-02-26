#include <stdio.h>
#include <math.h>

void main(void) {

    double n;
    char key;

    printf("Enter the numder: ");
    scanf("%lf", &n);

    printf("Choose the operation:\
    \n1 - sin\n2 - cos\n3 - tan\n4 - cot\n5 - sinh\n");
    scanf(" %c", &key);

    switch(key) {

        case '1': 
            n = sin(n);
            break;
        case '2': 
            n = cos(n);
            break;
        case '3': 
            n = tan(n);
            break;
        case '4': 
            n = cos(n)/sin(n);
            break;
        case '5': 
            n = sinh(n);
            break;
        default:
            printf("Please, enter the number from 1 to 5");
    }
    
    printf("Answer is: %lf", n);
}
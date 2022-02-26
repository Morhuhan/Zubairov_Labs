#include <stdio.h>

void main(void) {

    double array[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 11, 12, 13, 14, 15, 16, 16, 17, 18};
    int size_array = 20;

    for(int i = 0; i < size_array; i++){
        
        if(array[i] == array[i+1]) {
            printf("Answer is: %d and %d", i, i+1);
            break;
        }

    }

}
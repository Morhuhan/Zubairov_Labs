#include <stdio.h>
#include <math.h>

void main (void) {

    double x, y;
    double e = exp(1.0);

    printf("Enter the x ");
    scanf("%lf", &x);
   
    y = (pow((pow(e, sin(x)) + tan(x)), 3))/(pow(fabs((pow(x,2) - 0,85) * (pow(e,x) - sin(x))), 1/3));

    printf("Answer is %lf", y);
}
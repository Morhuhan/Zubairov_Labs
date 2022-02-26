#include <stdio.h>

int main (void) {

    double a,b,c,d;

    printf("Enter the a numder \n");
    scanf("%lf", &a);
    printf("Enter the b numder \n");
    scanf("%lf", &b);
    printf("Enter the c numder \n");
    scanf("%lf", &c);
    printf("Enter the d numder \n");
    scanf("%lf", &d);

    if((a <= b) && (b <= c) && (c <= d)) {
        a = b = c = d;
    }

    else if ((a > b) && (b > c) && (c > d)) {
        printf("a = %lf\nb = %lf\nc = %lf\nd = %lf\n", a, b, c, d);
        return 0;
    }

    else {
        a = a * a;
        b = b * b;
        c = c * c;
        d = d * d;
    }

    printf("= %lf\nb = %lf\nc = %lf\nd = %lf\n", a, b, c, d);

}
#include<stdio.h>

#define PI 3.14
#define harsh main
#define welcome printf("welcome to C programming\n");
#define cube(x) (x*x*x)

void harsh() {

    welcome;
    
    int r = 14;

    printf("Area of circle is: %f\n",PI*r*r);

    printf("cube of number is: %d\n",cube(3));
}
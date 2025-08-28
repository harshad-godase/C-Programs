#include<stdio.h>

void main(){

    register int num =10;

    printf("\nvalue of num is :%d",num);
    printf("\nAddress of num is:%u",&num); // address of register variable is not accessible
}
#include<stdio.h>

void main(){
    int num1, num2;
    int *ptr1, *ptr2;

    ptr1 = &num1;
    ptr2 = &num2;

    printf("Enter two numbers: ");
    scanf("%d%d", ptr1, ptr2);

    int sum = *ptr1 + *ptr2;

    printf("Sum of two numbers is: %d\n", sum);
}
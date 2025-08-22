#include<stdio.h>

void main(){
    int num=10;

    int *ptr; //pointer declaration

    ptr = &num; //Assign the address

    printf("Value of num is %d\n",num);
    printf("Address of num is %u / %p\n",&num,&num);

    printf("Value of ptr is %d",ptr);
    printf("\nAddress of ptr is %u / %p\n",&ptr,&ptr);
    printf("Derefrencing of ptr is %d\n",*ptr);

    *ptr=20; //Changing the value of num using pointer

    printf("Value of num after changing using pointer is %d\n",num);

    *ptr=30;
    printf("Value of num after changing using pointer is %d\n",*ptr);

    




}
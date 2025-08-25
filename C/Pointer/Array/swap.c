#include<stdio.h>

void main(){
    
    int a,b,temp;
    int *ptr1,*ptr2;

    ptr1=&a;
    ptr2=&b;

    printf("Enter the two numbers:");
    scanf("%d%d",ptr1,ptr2);

    printf("\nTwo numbers are before swapping:%d %d",a,b);

    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;

    printf("\nTwo numbers are after swapping:%d %d",a,b);


    //Swapping without 3rd variable
    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

     printf("\nswapping without using extra variable:%d %d",a,b);



}


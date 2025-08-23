#include<stdio.h>

void swapping(int *ptr1, int *ptr2);

void main(){

    int num1,num2;

    printf("Enter the two numbers:");
    scanf("%d%d",&num1,&num2);
     printf("\nTwo numbers are before swapping:%d %d",num1,num2);


    swapping(&num1, &num2);   //Call by Refrence
    printf("\nTwo numbers after swapping using function:%d %d", num1, num2);
    //It will affect original number because we pass value using call by refrence that means we are passing address
}


void swapping(int *ptr1, int *ptr2) {

    int temp;

    temp=*ptr1;

    *ptr1=*ptr2;

    *ptr2=temp;

}
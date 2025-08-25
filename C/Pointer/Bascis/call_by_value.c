#include<stdio.h>

void swapping(int n1, int n2);

void main(){

    int num1,num2;

    printf("Enter the two numbers:");
    scanf("%d%d",&num1,&num2);
     printf("\nTwo numbers are before swapping:%d %d",num1,num2);


    swapping(num1, num2);   //Call by Value
    printf("\nTwo numbers after swapping using function:%d %d", num1, num2);
    // No is same beacuse we are passing the value It will not affect the original number
}


void swapping(int n1, int n2) {

    int temp;

    temp=n1;

    n1=n2;

    n2=temp;
    
    printf("\nTwo numbers after swapping within the function:%d %d", n1, n2);



}
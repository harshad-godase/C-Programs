#include<stdio.h>

void main(){
    int num1 , num2;
    printf("\nEnter the two numbers:");
    scanf("%d%d",&num1,&num2);

    num1 = num1 ^ num2;
    num2 = num1 ^ num2;
    num1 = num1 ^ num2;
    
    printf("\nAfter swapping the two numbers are:%d %d",num1,num2);

}
#include<stdio.h>

#define max(a,b) ( a > b ? a : b)
#define min(a,b) ( a < b ? a :b)
#define square(a) (a*a)
#define sum(a,b) (a+b)

void main() {

    int num1 , num2;
    printf("Enter two numbers for min and max:");
    scanf("%d %d",&num1,&num2);

    printf("Maximum number is: %d\n",max(num1,num2));
    printf("Minimum number is: %d\n",min(num1,num2));

    int num3;
    printf("\nEnter number for square:");
    scanf("%d",&num3);

    printf("\nSquare of number is :%d",square(num3));

    int num4 , num5;
    printf("\nEnter two numbers for addition:");
    scanf("%d %d",&num4,&num5);

    printf("\nAddition of two number is: %d",sum(num4,num5));
}




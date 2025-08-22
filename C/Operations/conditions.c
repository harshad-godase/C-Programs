#include<stdio.h>

void main() {
   
    int num1, num2;

    printf("Enter two numbers: ");

    scanf("%d %d", &num1, &num2);

    if (num1>num2) {
        printf("Num1 is greater than Num2\n");
    } else {
        printf("Num1 is smaller than Num2\n");
    }

    // Check number is positive or not
    int num;
    printf("Enter the number :");
    scanf("%d",&num);

    if(num>0){
        printf("Number is positive");
    }else{
        printf("Number is Negative");
    }

    if (0)
    {
       printf("\ngfd");
    }
    else{
        printf("\nbhvfsd");
    }

    // Accept 3 no and find max

    int a, b, c;
    printf("\nEnter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    if (a >= b && a >= c) {
        printf("The maximum number is: %d\n", a);
    } else if (b >= a && b >= c) {
        printf("The maximum number is: %d\n", b);
    } else {
        printf("The maximum number is: %d\n", c);
    }   
    
}
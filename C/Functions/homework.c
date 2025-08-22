#include<stdio.h>

int armstrong(int n);
void even_odd(int n);
void factorial(int n);
int prime(int n);
void cube(int n);
void even_range(int n);

void main(){
    int n;
    printf("Enter a number:");
    scanf("%d", &n);

    if (armstrong(n))
    {
       printf("\nIts Armstrong number");
    }else
    {
        printf("\nIts not Armstrong number");
    }

    even_odd(n);

    factorial(n);

     if (prime(n))
    {
     printf("\nThe number is prime");
    }else{
        printf("\nNumber is Composite");
    }

    cube(n);
    
    even_range(n);

}

// Armstrong number check

int armstrong(int n){
 int temp,r,sum=0;
    temp = n;
    while(n > 0){
        r = n % 10; 
        sum += r * r * r; 
        n = n / 10; 
    }
    return (sum == temp);
}

// Check number is Even or odd

void even_odd(int n){
    if(n%2==0){
        printf("\nThe number is Even");
    }else
    {
        printf("\nThe number is odd");
    }
}

// Factorial function

void factorial(int n){
   int fact = 1;
   for (int i = 1; i <= n; i++)
   {
    fact*=i;
   }
   printf("\nFactorial of number is: %d",fact);
}

// Prime number check Function

int prime(int n){
   
     for (int i = 2; i<=n/2; i++)
    {
         if(n%i==0){
            return 0;
        }
    }
    return 1;
}

// Cube of number

void cube(int n){
    printf("\nCube of number is :%d",n*n*n);
}

// print all even number in range

void even_range(int n){
    printf("\nEven number in range are:");
    for (int i = 1; i <= n; i++)
    {
          if(i%2==0){
            printf("%d\t",i);
          }
    }    
}
#include<stdio.h>

void even_print(int s, int e);
int Even(int n);

void primeprint(int s ,int e);
int prime(int n);

void armstrongprint(int s ,int e);
int armstrong(int n);

void main(){

   int start,end;
   printf("Enter the two number:");
   scanf("%d %d",&start,&end);

   printf("\nEven numbers in range are:");
   even_print(start,end);
   
   printf("\nPrime numbers in range are:");
   primeprint(start,end);

   printf("\nArmstrong number in range are:");
   armstrongprint(start,end);
}

void even_print(int s, int e){
   while (s<=e)
   {
    Even(s);
    s++;
   }
}
int Even(int n){
    if(n%2==0){
        printf("%d\t",n);
    }
}

void primeprint(int s ,int e){
    while (s<=e)
    {
        prime(s);
        s++;
    }
    
}
int prime(int n){
     for (int i = 2; i<=n/2; i++)
    {
         if(n%i==0){
            return 0;
        }
    }
    printf("%d\t",n);
}


void armstrongprint(int s ,int e){
    while (s<=e)
    {
        armstrong(s);
        s++;
    }
    
}
int armstrong(int n){
 int temp,r,sum=0;
    temp = n;
    while(n > 0){
        r = n % 10; 
        sum += r * r * r; 
        n = n / 10; 
    }
    if (sum == temp){
        printf("%d\t", temp);
    }    
}


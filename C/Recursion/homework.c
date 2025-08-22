#include<stdio.h>

int natural_no(int s , int e);
int even(int s , int e);
int Odd(int s, int e);
int sum_natural_no(int s , int e);
int sum_even(int s , int e);


void main(){
    int s,e;
    printf("\nEnter interval start and end no:");
    scanf(" %d%d",&s,&e);

    printf("\nNatural number from %d to %d is:",s,e);
    natural_no(s,e);
    
    
    printf("\nEven numbers in range are:");
    even(s,e);

    printf("\nOdd numbers in range are:");
    Odd(s,e);

    printf("\nSum of natural number is: %d",sum_natural_no(s,e));

    printf("\nSum of Even numbers in range are: %d",sum_even(s,e));
    
}

//Natural numbers using functions

int natural_no(int s , int e){
     
    if(s>e)
    {
        return 0;
    }
    printf("%d\t",s);
    natural_no(s+1,e);
}

//Even numbers using functions

int even(int s , int e){
    if(s>e){
       return 0;
    }
    if(s%2==0){
        printf("%d\t",s);
    }
    even(s+1,e);
}

// Odd numbers using functions

int Odd(int s, int e) {
    if (s > e) {
        return 0;
    }
    if (s % 2 != 0) {
        printf("%d\t", s);
    }
    Odd(s + 1, e);
}

// Sum of natural number

int sum_natural_no(int s , int e){

    if(s>e)
    {
        return 0;
    }
   else{
     return s + sum_natural_no(s+1,e);
   }
}

// Sum of Even numbers

int sum_even(int s , int e){
    if(s>e){
        return 0;
    }
    else if (s%2==0){
        return s + sum_even(s+1,e);
    }
    else sum_even(s+1,e);
}


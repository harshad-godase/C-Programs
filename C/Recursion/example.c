#include <stdio.h>
long long factorial(int n);
int factorial2(int n);
int sumOfDigits(int n);
void main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("\nFactorial of %d is %lld", n, factorial(n));
    printf("\nFactorial of %d is %d", n, factorial2(n));

    printf("\nSum of digits: %d",sumOfDigits(n));
    

    
}
// Factorial of number
long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    return n * factorial(n - 1);
}

int factorial2(int n){
    if(n == 0 || n == 1){
        return 1; 
    }
    int factnm1 = factorial2(n - 1);
    int factn = factnm1 * n;
    return factn;
}

// Sum of digits 

int sumOfDigits(int n){
if (n == 0) return 0;
 else return (n % 10) + sumOfDigits(n / 10);
}


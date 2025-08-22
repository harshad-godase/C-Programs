#include <stdio.h>

// Function declarations
void min(int a, int b);
void max(int a, int b);
void minmax(int a,int b);

void main() {
    int a, b;
    printf("\nEnter num1 and num2: ");
    scanf("%d %d", &a, &b);

    min(a, b);
    max(a, b);
    minmax(a,b);

}
// Function to find minimum
void min(int a, int b) {
    if (a < b) {
        printf("\nThe minimum number is: %d", a);
    } else {
        printf("\nThe minimum number is: %d", b);
    }
}
// Function to find maximum
void max(int a, int b) {
    if (a > b) {
        printf("\nThe maximum number is: %d", a);
    } else {
        printf("\nThe maximum number is: %d", b);
    }
}
// Using ternary Operator
void minmax(int a, int b){
    a<b? printf("\nThe minimun number is :%d",a): printf("\nThe minimun number is :%d",b);
    a>b? printf("\nThe maxmium number is :%d",a): printf("\nThe maximun number is :%d",b);

}

#include<stdio.h>
void main() {

    int a, b, c;
    printf("Enter three numbers: ");
    scanf(" %d %d %d", &a, &b, &c);

    switch (a>b && a>c) {
        case 1:
            printf("Maximum number is: %d\n", a);
            break;
        
        case 0:
            switch (b>c) {
                case 1:
                    printf("Maximum number is: %d\n", b);
                    break;
                case 0:
                    printf("Maximum number is: %d\n", c);
                    break;  
            }
            break;
        }

        // Check number is +ve -ve or zero
    int num;
    printf("Enter a number: ");
    scanf(" %d", &num);
    switch (num == 0) {
        case 1:
            printf("The number is equal.\n");
            break;
        case 0:
            switch (num>0)
            {
            case 1:
                printf("\nThe number is positive");
                break;
            case 0:
                 printf("\nThe number is Negative");
                 break;
            }
            break;

        }
    }
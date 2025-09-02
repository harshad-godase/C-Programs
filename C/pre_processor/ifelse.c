#include<stdio.h>
#define number 10   // macro definition

void main() {

    #if number % 2 == 0
        printf("\nNumber is even");
    #else
        printf("\nNumber is odd");
    #endif

}

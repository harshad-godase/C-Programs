#include<stdio.h>

void main(){
    // wild pointer 
    
    int *ptr=NULL; // wild pointer initialization

    printf("\nptr value is:%d",ptr); // garbage value
}
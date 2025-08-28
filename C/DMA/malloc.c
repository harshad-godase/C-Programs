#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr;
    
    ptr = (int*)malloc(3*sizeof(int)); // allocating memory for 3 integers

    if (ptr == "\0")
    {
        printf("Memory is full/ Insufficent.\n");
       
    }else{
        printf("Memory allocated successfully.\n");

        // Logic

    printf("Initial value of malloc is :");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\t",*(ptr + i));
    }

    printf("\nAddress of malloc is:");
    for (int i = 0; i < 3; i++)
    {
        printf("\n%u",ptr + i);
    }
    
    
    
    free(ptr); // deallocating memory
    printf("\nDeallocated memory successfully.\n");

}
    }

    
#include<stdio.h>
#include<stdlib.h>

void main(){
    int *ptr;
    
    ptr = (int*)malloc(3*sizeof(int)); // allocating memory for 3 integers

    if (ptr == NULL)
    {
        printf("Memory is full/ Insufficent.\n");
       
    }else{
        printf("Memory allocated successfully.\n");
        
        ptr[0]=10;
        ptr[1]=20;
        ptr[2]=30;

    printf("\nData in memory is :");

    for (int i = 0; i < 3; i++)
    {
        printf("%d\t",*(ptr + i));
    }

    ptr = (int*)realloc(ptr,5*sizeof(int));

    ptr[3]=40;
    ptr[4]=50;

     printf("\nAfter Reallocation Data in memory is :");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t",*(ptr + i));
    }

    free(ptr); // deallocating memory
    printf("\nDeallocated memory successfully.\n");

    }
  }

    
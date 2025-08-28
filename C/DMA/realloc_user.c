#include<stdio.h>
#include<stdlib.h>

void main(){
    
    int *ptr;

    int size;
    printf("\nEnter the size of memory:");
    scanf("%d",&size);
    
    ptr = (int*)malloc(size*sizeof(int)); 

    if (ptr == NULL)
    {
        printf("Memory is full/ Insufficent.\n");
       
    }else{
        printf("Memory allocated successfully.\n");
        
       
    printf("\nData add in memory is :");
    for (int i = 0; i < size; i++)
    {
          scanf("%d",(ptr + i));
    }

    printf("\nData in memory is :");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",*(ptr + i));
    }

    int newsize;
    printf("\nEnter the size that you want to add in memory:");
    scanf("%d",&newsize);

    int size2= size+newsize;

    ptr = (int*)realloc(ptr,size2*sizeof(int));

    printf("\nAdd the reamaining new data:");
    for (int i = size; i < size2; i++)
    {
        scanf("%d",(ptr+i));
    }
    
     printf("\nAfter Reallocation Data in memory is :");

    for (int i = 0; i < size2; i++)
    {
        printf("%d\t",*(ptr + i));
    }

    free(ptr);
    printf("\nDeallocated memory successfully.\n");

    }
  }

    
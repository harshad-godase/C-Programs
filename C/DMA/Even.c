#include<stdio.h>
#include<stdlib.h>

void main(){
    
    int size;
    printf("Enter the size of memory to be allocated:");
    scanf("%d",&size);

    int *ptr;

    ptr = (int*)malloc(size*sizeof(int)); 

    if (ptr == NULL)
    {
        printf("Memory is full/ Insufficent.\n");
       
    }else{
        printf("Memory allocated successfully.\n");

        // Logic

    printf("Enter the elements:\n");
    for (int i = 0; i < size; i++)
    {
        scanf("%d",ptr + i);
    }

    printf("Elements are :");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",*(ptr + i));
    }

    printf("\nEven numbers are:");
    for (int i = 0; i < size; i++)
    {
        if (*(ptr + i)%2==0)
        {
            printf("%d\t",*(ptr + i));
        }
       
    }
      
    free(ptr); // deallocating memory
    printf("\nDeallocated memory successfully.\n");
}

}
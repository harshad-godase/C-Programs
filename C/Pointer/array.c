#include<stdio.h>

void main(){
    int size;

    printf("Enter the size of array:");
    scanf("%d",&size);

    int arrr[size];
    
    int *ptr=arrr; //ptr=&arr[0]

    printf("\nEnter the Array Elements:");

    for (int i = 0; i < size; i++)
    {
        scanf("%d",ptr++);
    }

    ptr=arrr;

    printf("\nArray Elements:");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t",*ptr++);
    }
    


    
}
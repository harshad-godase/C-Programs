#include<stdio.h>
void main(){

    int size;
    printf("\nEnter the size of array:");
    scanf("%d",&size);

    int arr[size];
    printf("\nEnter the %d Elements of array:",size);

    for (int i = 0; i < size; i++)
    {
        scanf(" %d",&arr[i]);
    }

    printf("\nMain Array Elements:");
    for (int i = 0; i < size; i++)
    {
       printf("%d\t",arr[i]);
    }

    // copy array

    int copy[size];
     
    printf("\nBefore copy elements of array:");

    for (int i = 0; i < size; i++)
    {
       printf("%d\t",copy[i]);
    }
    
    for (int i = 0; i < size; i++)
    {
        copy[i]=arr[i];
    }

    printf("\nAfter copy elements of array:");
    for (int i = 0; i < size; i++)
    {
       printf("%d\t",copy[i]);
    }
    
    // Negative elements from array
    
    int count=0;
    for (int i = 0; i < size; i++)
    {
       if (arr[i]<0)
       {
         count++;
       }
       
    }
    printf("\nNegative elements in arr are:%d",count);
    
    
}
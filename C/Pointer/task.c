#include <stdio.h>

void arr_print(int *ptr,int n);

void main() {
    int size;

    printf("Enter the size of array: ");
    scanf("%d", &size);

    int arr[size];
    int copy[size];

    int *ptr1 = arr;
    int *ptr2 = copy;

    printf("\nEnter the Array Elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", ptr1 + i);   
    }

    printf("\nArray Elements:\n");
    arr_print(arr,size);

    // Copy array using pointer 

    for (int i = 0; i < size; i++) {
        *(ptr2 + i) = *(ptr1 + i);  
    }

   printf("\nCopy Array Elements:\n");
   arr_print(copy,size);
}

void arr_print(int *ptr,int n){
    for (int i = 0; i < n; i++)
    {
       printf("%d\t",*(ptr+i));
    }
    
}
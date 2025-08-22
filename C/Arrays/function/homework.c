#include<stdio.h>

void arr_print(int arr[],int n);
void duplicate_dele(int arr[],int n);
void duplicate_count(int arr[],int n);

void main(){

    int size;
    printf("\nEnter the size of array:");
    scanf("%d",&size);

    int data[size];
    printf("\nEnter the %d Elements of array:",size);

    for (int i = 0; i < size; i++)
    {
        scanf(" %d",&data[i]);
    }
    printf("\nArray Elements:");
    arr_print(data,size);

    printf("\nAfter deleting duplicate elements:");
    duplicate_dele(data,size);

    duplicate_count(data,size);

}

//Function to print Array

    void arr_print(int arr[],int n){
        for (int i = 0; i < n; i++)
    {
       printf(" %d\t",arr[i]);
    }
}

//function to delete duplicate from array

void duplicate_dele(int arr[],int n){
    int i, j, k;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                for (k = j; k < n - 1; k++)
                {
                    arr[k] = arr[k + 1];
                }
                n--;
                j--;
            }
        }
    }
    arr_print(arr, n);
}

// Count the duplicates in array

void duplicate_count(int arr[],int n){
    int i, j, count=0;
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                break; // Break to avoid counting the same element multiple times
               
            }
        }
    }
    printf("\nNumber of duplicate elements: %d", count);

}


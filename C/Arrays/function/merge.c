#include<stdio.h>

void arr_print(int arr[],int n);
void merge_arrays(int arr1[], int n1, int arr2[], int n2, int merged[]);
void add_arrays(int arr1[], int n1, int arr2[], int n2, int result[]);
    

void main(){

    int size1, size2;

    printf("\nEnter the size of two arrays:");
    scanf("%d %d", &size1, &size2);

    int arr1[size1], arr2[size2], arr3[size1 + size2];

    printf("\nEnter the %d Elements of first array:", size1);
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("\nEnter the %d Elements of second array:", size2);
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("\nFirst Array Elements:");
    arr_print(arr1, size1);
     
    printf("\nSecond Array Elements:");
    arr_print(arr2, size2);

    printf("\nMerged Array Elements:");
    merge_arrays(arr1, size1, arr2, size2, arr3);

    printf("\nAfter adding two arrays:");
    add_arrays(arr1, size1, arr2, size2, arr3);
}

   // Function to print Array

    void arr_print(int arr[],int n){
        for (int i = 0; i < n; i++)
        {
           printf(" %d \t",arr[i]);
        } 
    }  

    // Function to merge two arrays

    void merge_arrays(int arr1[], int n1, int arr2[], int n2, int merged[]) {

        for (int i = 0; i <n1; i++)
        {
            merged[i] = arr1[i];
        }
        for (int i = 0; i < n2; i++)
        {
            merged[n1 + i] = arr2[i];
        }
        arr_print(merged, n1 + n2);
    }
    

    // Function to addition of two arrays

    void add_arrays(int arr1[], int n1, int arr2[], int n2, int result[]) {
        
        int min_size = n1 < n2 ? n1 : n2;
        int max_size = (n1 > n2) ? n1 : n2;

        for (int i = 0; i < min_size; i++)
        {
            result[i] = arr1[i] + arr2[i];
        }
        for (int i = min_size; i < n1; i++)
        {
            result[i] = arr1[i];
        }
        for (int i = min_size; i < n2; i++)
        {
            result[i] = arr2[i];
        }
        arr_print(result, max_size);
    }
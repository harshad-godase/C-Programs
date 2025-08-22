#include<stdio.h>

void arr_print(int arr[],int n);
void sort(int arr[],int n);

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
     
    printf("\nAfter sorting Array Elements:");
    sort(data,size);

    




}

//Function to print Array

void arr_print(int arr[],int n){
        for (int i = 0; i < n; i++)
    {
       printf(" %d\t",arr[i]);
    }
}

// Function to sort array

void sort(int arr[],int n){
    int i,j, temp;

    for ( i = 0; i < n; i++)
    {
       for ( j = i+1; j < n; j++)
       {
         if (arr[i]>arr[j])
         {
           temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
         }
         
       }  
    }
    arr_print(arr,n);
    
}
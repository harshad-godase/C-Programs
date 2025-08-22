#include<stdio.h>


void revese_arr(int arr[],int n);

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

    printf("\nReverse Array Elements:");
    revese_arr(data,size);

}



void revese_arr(int arr[],int n){   
    
    for (int i = n-1 ; i >=0; i--)
    {
       printf(" %d\t",arr[i]);
    }

}
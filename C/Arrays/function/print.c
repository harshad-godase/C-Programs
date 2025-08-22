#include<stdio.h>

void arr_print(int data[],int size);
void delete_arr(int data[],int n);

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

    delete_arr(data,size);




}

//Function to print Array

void arr_print(int arr[],int n){
        for (int i = 0; i < n; i++)
    {
       printf(" %d\t",arr[i]);
    }
}

// Function to delete array element

void delete_arr(int data[],int n){
     int pos;
    printf("\nEnter the position of Element:");
    scanf("%d",&pos);

    if(pos<=0||pos>n){
        printf("\nInvalid position");
    }else{
        printf("valid position");
    }

   for (int i = pos - 1; i < n - 1; i++)
    { 
       data[i] = data[i + 1]; 
    }

    arr_print(data,n-1);

}
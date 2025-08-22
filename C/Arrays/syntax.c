#include<stdio.h>
void main(){

    int data[]= {10,154,20,35,54,75,65,48,68,46};

    printf("%d\t",data[1]);
    printf("%d\t",data[0]);
    printf("%d\t",data[2]);

    printf("\nSize of array is %d",sizeof(data));

    for (int i = 0; i < 10; i++)
    {
        printf("\n%d\t",&data[i]);
        printf("%d",data[i]);

    }

    int arr[5];
    printf("\nEnter the 5 elements in arr:");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&arr[i]);   
    }
    
    printf("\nArray elements are:");
       for (int i = 0; i < 5; i++)
    {
        printf("%d\t",arr[i]);
        
    }
    

    

}
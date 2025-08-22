#include<stdio.h>
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
    printf("\nBefore Deleting Array Elements:");
    for (int i = 0; i < size; i++)
    {
       printf("%d\t",data[i]);
    }

    // Deleting an element from array position
    
    int pos;
    printf("\nEnter the position of Element:");
    scanf("%d",&pos);

    if(pos<=0||pos>size){
        printf("\nInvalid position");
    }else{
        printf("valid position");
    }

   for (int i = pos - 1; i < size - 1; i++)
    { 
       data[i] = data[i + 1]; 
    }


    printf("\nafter deleting Array Elements:");
    for (int i = 0; i < size-1; i++)
    {
       printf("%d\t",data[i]);
    }
}
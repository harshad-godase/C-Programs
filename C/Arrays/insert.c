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
    printf("\n Array Elements:");
    for (int i = 0; i < size; i++)
    {
       printf("%d\t",data[i]);
    }
    
    // Inserting an element at a specific position

    int pos, new_ele;

    printf("\nEnter the position of Element:");
    scanf("%d",&pos);
    printf("\nEnter the new element:");
    scanf("%d",&new_ele);

    if(pos<=0||pos>size){
        printf("\nInvalid position");
    }else{
        printf("\nvalid position");
    }

    for (int i = size; i >= pos; i--)
    {
         data[i]=data[i-1];
    }

    data[pos-1]=new_ele;

    printf("\nNew Array Elements:");
    for (int i = 0; i <= size; i++)
    {
       printf("%d\t",data[i]);
    }

    
    


    
}
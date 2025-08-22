#include<stdio.h>

void main(){
    int size;
    printf("\nEnter the array size:");
    scanf("%d",&size);

    int data[size];
    printf("\nEnter the numbers in array:");

    for (int i = 0; i < size; i++)
    {
       scanf("%d",&data[i]);
    }

    // Maximun number in array

    int max= data[0];

    for (int i = 0; i < size; i++)
    {
        if (data[i]>max)
        {
           max=data[i];
        }
        
    }
    printf("\nMaxium number in array are :%d",max);

    // Minimun number in array

    int min= data[0];

    for (int i = 0; i < size; i++)
    {
        if (data[i]<min)
        {
           min=data[i];
        }
        
    }
    printf("\nMinium number in array are :%d",min);
    
 // Search in array
    
    printf("\nEnter the element for search:");
    int s,found = 0;
    scanf("%d",&s);
    
    for (int i = 0; i < size; i++)
    {
       if (s==data[i])
       {
          printf("\nElement found in array");
          found = 1;
          break;
       }
    }
    if (found == 0)
    {
       printf("\nElement not found in array");
    }
    
    



    
    
}
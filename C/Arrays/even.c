#include<stdio.h>

void main(){
   int size;
   printf("\nEnter the size of array:");
   scanf("%d",&size);
   
   int arr[size];
   printf("\nEnter the array Elements:",size);

   for (int i = 0; i < size; i++)
   {
      scanf("%d",&arr[i]);
   }

   // Even number from array

   printf("\nEven number from array is:");
   for (int i = 0; i < size; i++)
   {
      if (arr[i]%2 == 0)
      {
        printf(" %d\t",arr[i]);
      }
      
   }

   // Sum of all Even numbers

   int sum=0;
   for (int i = 0; i < size; i++)
   {
        if (arr[i]%2==0)
        {
           sum+=arr[i];
        }
        
   }
   printf("\nSum of all Even numberd is: %d",sum);
   
   
}
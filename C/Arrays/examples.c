#include<stdio.h>

void main(){
   int size;
   printf("\nEnter the size of array:");
   scanf("%d",&size);
   
   int arr[size];
   printf("\nEnter mark of %d students:",size);
   int sum=0;

   for (int i = 0; i < size; i++)
   {
      scanf("%d",&arr[i]);
   }

   // Sum of Array Elements

   for (int i = 0; i <size; i++)
   {
     sum+=arr[i];
   }
   printf("\nSum of All Array Elements is:%d",sum);

}
#include<stdio.h>

void main(){
    int num =10;
    int *ptr=&num; 

    printf("value of num is : %d",num);
    printf("\nAddress of num is:%d",&num);
    printf("\nvalue of ptr is:%d",ptr);
    printf("\nAddress of ptr is:%d",&ptr);

    printf("\nDereferencing ptr value is:%d",*ptr); 

    int **dptr=&ptr; // double pointer declaration

    printf("\nvalue of dptr is:%d",dptr);
    printf("\nAddress of dptr is:%d",&dptr);
    printf("\nDereferencing dptr value is:%d",**dptr);
}
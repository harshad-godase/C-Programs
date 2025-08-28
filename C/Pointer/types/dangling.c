#include<stdio.h>
#include<stdlib.h>

void main(){
    int num=10;

    int *ptr=&num; 

    printf("%d",ptr);

    free(ptr); // deallocating memory of pointer

    //dangling pointer

    printf("\nAfter deallocation of memory ptr value is:%d",ptr); 

    ptr=NULL;

    printf("\nAfter setting NULL ptr value is:%d",ptr);
}
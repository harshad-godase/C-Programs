#include<stdio.h>

void main(){
    int num=10;
    float decimal=10.5;
    char ch='A';

    void *ptr; // void pointer declaration

    ptr=&num; // void pointer pointing to integer variable

    printf("\nnum value is:%d",*(int*)ptr); // typecasting void pointer to integer pointer

    ptr=&decimal; // void pointer pointing to float variable

    printf("\ndecimal value is:%f",*(float*)ptr); // typecasting void pointer to float pointer

    ptr=&ch; // void pointer pointing to char variable

    printf("\nchar value is:%c",*(char*)ptr); // typecasting void
}
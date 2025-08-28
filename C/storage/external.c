#include<stdio.h>

extern int a=100; // declaration of global variable

void fun();

void main(){
    printf("Value of a is:%d",a);
    fun();
}

void fun(){
    printf("\nValue of a in fun is:%d",a);
}
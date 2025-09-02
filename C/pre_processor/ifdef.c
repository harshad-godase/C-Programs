#include<stdio.h>
#define INPUT

void main(){

int a;

#ifdef INPUT
    printf("Enter the value of a:");
    scanf("%d",&a);
    printf("Value of a is:%d",a);

#else
    a = 10;
    printf("Value of a is:%d",a);

#endif

}
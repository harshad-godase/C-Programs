#include<stdio.h>

void main(){
    int num;
    printf("\nENter the number:");
    scanf("%d",&num);

    int res = (num & 1);

    printf("\nLSB of number is:%d",res);
}
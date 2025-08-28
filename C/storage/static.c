#include<stdio.h>

void main(){
    fun();
    fun();
    fun();
}

void fun(){
    static int x=10;

    printf("%d\n",x);

    x++;
}
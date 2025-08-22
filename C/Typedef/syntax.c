#include<stdio.h>

void main(){

    //unsigned int a=10;
    typedef unsigned int u_int;

    u_int a =10;
    printf("%u",a);

    //unsigned short int num=20;
    typedef unsigned short int uint;

    uint num1=20;
    printf("\n%hu\n",num1);

    //typedef with array

    typedef int arr[5];

    arr temp={1,2,54,5,5};

    printf("\nArray Elements are:\n");

    for (int i = 0; i < 5; i++)
    {
       printf("%d\t",temp[i]);
    }
    
}
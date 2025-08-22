#include<stdio.h>
#pragma pack(1)// To remove the padding

struct employee
{
   char a;
   int age;
   float sal;
}emp;

void main(){
    printf("Size of Structure is :%d",sizeof(emp));
}

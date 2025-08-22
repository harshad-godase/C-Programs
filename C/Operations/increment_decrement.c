#include<stdio.h>
void main(){

int a=5;

//1st update then assign ++a // 1st assign then update a++
printf("%d",a);
printf("\n%d",a++);
printf("\n%d",++a);

int x=4,b=2;
int z= x++ - --b+ b++ +--x;
printf("\n%d",z);

int c=8;
c+= c++ + ++c;
printf("\n%d",c);

}
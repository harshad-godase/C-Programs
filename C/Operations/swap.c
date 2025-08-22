#include<stdio.h>
void main(){

int a,b,temp;

printf("Enter the value of a & b:");
scanf("%d %d",&a,&b);
printf("\nBefore swapping a=%d,b=%d",a,b);

//Logic1


temp=a;
a=b;
b=temp;


//Logic2 without extra space

a=a+b;
b=a-b;
a=a-b;

printf("\nAfter swapping a=%d,b=%d",a,b);

int x=10, y=13, z=5;
int result = ((x<y)&&(x>z));
printf("\n%d",result);


 //swapping using bitwise operator
    int x=10,y=5;
    x=x^y;
    y=x^y;
    x=x^y;
    printf("x=%d,y=%d",x,y);

}
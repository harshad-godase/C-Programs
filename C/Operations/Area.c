#include<stdio.h>

void main(){

    const int max =100;
    int num=18;
    num=45;

    int res = max + num;

    printf("\n%d",max);
    printf("\n%d",num);
    printf("\nAddition of max and num is : %d",res);

    //Area of circle
    
    float radias,area;
    const float pi=3.14;
    printf("\nEnter the value of radius:");
    scanf("%f",&radias);
    
    area= pi*radias*radias;
    printf("\nArea of circle is:%f",area);
    
    //area of rectangle

    float length,breadth;
    float rect;
    printf("\nEnter the length:");
    scanf("%f",&length);
    printf("\nEnter the bredth:");
    scanf("%f",&breadth);

    rect = length*breadth;
    printf("\narea of rectangle is:%f",rect);

    // string address
    
    char name1[]="harshad";
    char name2[10]="Godase";

    printf("\n%s %s",name1,name2);
    printf("\nAddress of name1 is : %u, %p",&name1,&name1);
    printf("\nAddress of name2 is : %u, %p",&name2,&name2);
     
    int a =10;
    float b=20;
    printf("\nAdress of a : %d, b : %p",&a,&b);
    




}
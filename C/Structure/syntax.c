#include<stdio.h>
#include<string.h>


struct employee
{
    int id;
    char name[10];
    float sal;
};

void main(){
    struct employee emp;

    emp.id=10;

    strcpy(emp.name,"Harshad");

    emp.sal=45.51;

    printf("\nEmployee details are");
    printf("\nEmployee name is:%s",emp.name);
    printf("\nEmployee id is:%d",emp.id);
    printf("\nEmployee salary is:%.2f",emp.sal);
    

}
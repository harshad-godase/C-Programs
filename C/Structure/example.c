#include<stdio.h>


struct Employee
{
    char name[10];  
    int id;
    float sal;

}emp1,emp2;

void main(){

    printf("\nEnter the Employee1 name:");
    scanf("%s", emp1.name);    // You dont need & beacuse Here, name itself is already the address
                               // of the first element (&name[0]).So, you don’t need &.

    printf("\nEnter the id of emp1:");
    scanf("%d",&emp1.id);

    printf("\nEnter the salary of emp1:");
    scanf("%f",&emp1.sal);

    
    printf("\nEnter the Employee2 name:");
    scanf(" %s", &emp2.name);
    printf("\nEnter the id of emp2:");
    scanf("%d",&emp2.id);
    printf("\nEnter the salary of emp1:");
    scanf("%f",&emp2.sal);

    printf("\nEmployee1 details are");
    printf("\nEmployee1 name is:%s",emp1.name);
    printf("\nEmployee1 id is:%d",emp1.id);
    printf("\nEmployee1 salary is:%f",emp1.sal);

    printf("\n-------------------");

    printf("\nEmployee2 details are");
    printf("\nEmployee2 name is:%s",emp2.name);
    printf("\nEmployee2 id is:%d",emp2.id);
    printf("\nEmployee2 salary is:%f",emp2.sal);
    
}
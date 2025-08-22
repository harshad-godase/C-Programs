#include<stdio.h>

struct Employee
{
    char name[10];  
    int id;
    float sal;

};

void main(){
    int size;
    printf("\nEnter the size of array:");
    scanf("%d",&size);

    struct Employee arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("\n------------------");
        printf("\nEnter the Employee %d Details:",i+1);
        printf("\n------------------");

        printf("\nEnter the Employee name:");
        scanf("%s", arr[i].name);   

        printf("\nEnter the id of emp:");
        scanf("%d",&arr[i].id);

        printf("\nEnter the salary of emp:");
        scanf("%f",&arr[i].sal);

    }
    
    for (int i = 0; i < size; i++)
    {
         printf("\n----------------");
         printf("\nEmployee %d details are:",i+1);
         printf("\n----------------");
         printf("\nEmployee1 name is:%s",arr[i].name);
         printf("\nEmployee1 id is:%d",arr[i].id);
         printf("\nEmployee1 salary is:%f",arr[i].sal);
    }
    


}
#include<stdio.h>\

struct student
{
   char name[10];
   int roll;
   float marks;
};

void main(){
    int size;
    printf("\nEnter the number of students:");
    scanf("%d",&size);
    
    struct student arr[size];
    struct student *ptr=arr;

    for (int i = 0; i < size; i++)
    {
    
    printf("\nEnter the name of student %d:",i+1);
    scanf("%s",&ptr->name);

    printf("\nEnter the roll number:");
    scanf("%d",&ptr->roll);

    printf("\nEnter the marks of studnet:");
    scanf("%f",&ptr->marks);

    printf("\n------------------");

    ptr++; // Update the pointer
    }
    ptr=arr; // make sure pointer again initialize to arr[0]

for (int i = 0; i < size; i++)
{
    printf("\n------------------");

    printf("\nStudent %d Details are:",i+1);
    printf("\nName od student:%s",ptr->name);
    printf("\nroll No:%d",ptr->roll);
    printf("\nMarks:%f",ptr->marks);

}

}
#include<stdio.h>\

struct student
{
   char name[10];
   int roll;
   float marks;
};

void main(){
    struct student st;
    struct student *ptr=&st;

    printf("\nENter the name of student:");
    scanf("%s",&ptr->name);

    printf("\nEnter the roll number:");
    scanf("%d",&ptr->roll);

    printf("\nEnter the marks of studnet:");
    scanf("%f",&ptr->marks);

    printf("\n------------------");

    printf("\nStudent Details are:");
    printf("\nName od student:%s",ptr->name);
    printf("\nroll No:%d",ptr->roll);
    printf("\nMarks:%f",ptr->marks);

}
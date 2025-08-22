#include<stdio.h>

struct student
{
    char name[50];
    int rollNo;
    float marks;
  
};

typedef struct employee
{
    int salary;
}emloy;




void main() {

    //Method1 
   // Struct student st
   typedef struct student stud;

   stud st;
   st.rollNo=10;
   printf("\n%d",st.rollNo);

   //Method2

   emloy emp;
   emp.salary=1000;
   printf("\n%d",emp.salary);

}
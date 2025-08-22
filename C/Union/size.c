#include<stdio.h>

union student
{
    char name[10];
    int rollNo;
    float marks;
  
}si;

union student Accept_details();
void student_details(union student s);

void main() {

    printf("\nSize of union is %d",sizeof(si));
    union student s1= Accept_details();
    student_details(s1); 
   
}

union student Accept_details(){

    union student st;

    printf("\nEnter the name of Student : ");
    scanf("%s", st.name);
    printf("\nEnter the roll number of Student : ");
    scanf("%d", &st.rollNo);
    printf("\nEnter the marks of Student : ");
    scanf("%f", &st.marks);

    return st;
}

void student_details(union student s){

    printf("\n\nStudent  details are:");
    printf("\nName: %s", s.name);
    printf("\nRoll No: %d", s.rollNo);
    printf("\nMarks: %.2f", s.marks);
    
}


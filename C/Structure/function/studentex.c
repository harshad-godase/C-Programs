#include<stdio.h>

struct student
{
    char name[50];
    int rollNo;
    float marks;
  
};

struct student Accept_details();
void student_details(struct student s);

void main() {

    struct student s1= Accept_details();
    student_details(s1); 
}

struct student Accept_details(){

    struct student st;

    printf("\nEnter the name of Student : ");
    scanf("%s", st.name);
    printf("\nEnter the roll number of Student : ");
    scanf("%d", &st.rollNo);
    printf("\nEnter the marks of Student : ");
    scanf("%f", &st.marks);

    return st;
}

void student_details(struct student s){

    printf("\n\nStudent  details are:");
    printf("\nName: %s", s.name);
    printf("\nRoll No: %d", s.rollNo);
    printf("\nMarks: %.2f", s.marks);
    
}


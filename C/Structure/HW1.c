#include<stdio.h>

/*
Create a structure to specify data on students given below:
Rollnumber, Name, Department, Course, Year of joining
Assume that thereare not more than 450 students in the collage
b) Write a function to print the data of a student whose roll number is given.
*/

struct Students
{
    int rollno;
    char name[20];
    char department[20];
    char course[20];
    int year_of_joining;
};

void Accept_details(struct Students student[],int n);
void student_details(struct Students s[], int n, int search_rollno);


void main(){
    int n,search_rollno;

    printf("Enter the number of students max(450): ");
    scanf("%d", &n);


    struct Students student[450];

    Accept_details(student, n);

    printf("\n-- Search for Student Details --");

    printf("Enter the roll number of the student to search: ");
    scanf("%d", &search_rollno);

    student_details(student, n, search_rollno);
}

void Accept_details(struct Students student[],int n){
    for (int i = 0; i < n; i++)
    {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Enter the roll number of Student: ");
        scanf("%d", &student[i].rollno);
        printf("Enter the name of Student: ");
        scanf("%s", student[i].name);
        printf("Enter the department of Student: ");
        scanf("%s", student[i].department);
        printf("Enter the course of Student: ");
        scanf("%s", student[i].course);
        printf("Enter the year of joining of Student: ");
        scanf("%d", &student[i].year_of_joining);
    }
}

void student_details(struct Students s[], int n, int search_rollno) {
    int found = 0;
    for (int i = 0; i < n; i++) {
        if (s[i].rollno == search_rollno) {
            printf("\n\nStudent details are:");
            printf("\nRoll No: %d", s[i].rollno);
            printf("\nName: %s", s[i].name);
            printf("\nDepartment: %s", s[i].department);
            printf("\nCourse: %s", s[i].course);
            printf("\nYear of Joining: %d", s[i].year_of_joining);
            found = 1;
            break;
        }
    }   
    if (found==0) {
        printf("\nStudent with roll number %d not found.", search_rollno);
    }
    printf("\n");
}


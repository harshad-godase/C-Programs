#include<stdio.h>

struct student
{
    char name[50];
    int rollNo;
    float marks;
    int age;
}student1, student2, student3;

void main() {

    printf("\nEnter the name of Student 1: ");
    scanf("%s", student1.name);
    printf("\nEnter the roll number of Student 1: ");
    scanf("%d", &student1.rollNo);
    printf("\nEnter the marks of Student 1: ");
    scanf("%f", &student1.marks);
    printf("\nEnter the age of Student 1: ");
    scanf("%d", &student1.age);

    printf("\nEnter the name of Student 2: ");
    scanf("%s", student2.name);
    printf("\nEnter the roll number of Student 2: ");
    scanf("%d", &student2.rollNo);
    printf("\nEnter the marks of Student 2: ");
    scanf("%f", &student2.marks);
    printf("\nEnter the age of Student 2: ");
    scanf("%d", &student2.age);

    printf("\nEnter the name of Student 3: ");
    scanf("%s", student3.name);
    printf("\nEnter the roll number of Student 3: ");
    scanf("%d", &student3.rollNo);
    printf("\nEnter the marks of Student 3: ");
    scanf("%f", &student3.marks);
    printf("\nEnter the age of Student 3: ");
    scanf("%d", &student3.age);

    printf("\n\nStudent 1 details are:");
    printf("\nName: %s", student1.name);
    printf("\nRoll No: %d", student1.rollNo);
    printf("\nMarks: %.2f", student1.marks);
    printf("\nAge: %d", student1.age);

    printf("\n-------------------");

    printf("\n\nStudent 2 details are:");
    printf("\nName: %s", student2.name);
    printf("\nRoll No: %d", student2.rollNo);
    printf("\nMarks: %.2f", student2.marks);
    printf("\nAge: %d", student2.age);

    printf("\n-------------------");

    printf("\n\nStudent 3 details are:");
    printf("\nName: %s", student3.name);
    printf("\nRoll No: %d", student3.rollNo);
    printf("\nMarks: %.2f", student3.marks);
    printf("\nAge: %d", student3.age);
}

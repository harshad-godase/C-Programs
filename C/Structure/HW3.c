#include<stdio.h>

/*
There is a structure called employee that holds information like
employee code, name, date of joining.
Write a program to create an array of the structure and enter some data into it.
Then ask the user to enter current date. Display the names
of those employees whose tenure is 3 or more than 3 years according to the given current date.
*/

struct employee
{
    int emp_code;
    char name[50];
    int date_of_joining; 
};

void accept_details(struct employee emp[], int n);
void display_tenure(struct employee emp[], int n, int current_date);

void main(){
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    struct employee emp[n];

    accept_details(emp, n);

    int current_date;
    printf("\nEnter current date (YYYYMMDD): ");
    scanf("%d", &current_date);

    display_tenure(emp, n, current_date);

}

void accept_details(struct employee emp[], int n){
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for employee %d:", i + 1);
        printf("\nEnter employee code: ");
        scanf("%d", &emp[i].emp_code);
        printf("Enter name: ");
        scanf("%s", emp[i].name);
        printf("Enter date of joining (YYYYMMDD): ");
        scanf("%d", &emp[i].date_of_joining);
    }
}

void display_tenure(struct employee emp[], int n, int current_date) {

    int cyear = current_date / 10000;

    printf("\nEmployees with tenure of 3 or more years:\n");

    for (int i = 0; i < n; i++) {
        int emp_year = emp[i].date_of_joining / 10000;
        if ((cyear - emp_year) >= 3) {
            printf("\nEmployee name: %s", emp[i].name);
        }
    }
   
}
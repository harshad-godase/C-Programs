#include <stdio.h>

void main() {

    FILE *fptr;

    char name[20];
    int roll_no;
    float per;

    printf("Enter name: ");
    scanf("%s", name);
    printf("Enter roll no: ");
    scanf("%d", &roll_no);
    printf("Enter percentage: ");
    scanf("%f", &per);

    fptr = fopen("student.txt", "w");

    if (fptr == NULL) {

        printf("File not created!\n");

    } else {

        fprintf(fptr, "%s %d %.2f\n", name, roll_no, per);

        printf("Data written successfully.\n");
        
        fclose(fptr);
    }
}

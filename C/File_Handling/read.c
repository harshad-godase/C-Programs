#include <stdio.h>

void main() {

    FILE *fptr;

    char name[20];
    int roll_no;
    float per;

    fptr = fopen("student.txt", "r");

    if (fptr == NULL) {
        printf("File not found!\n");
    } else {

        fscanf(fptr, "%s %d %f", name, &roll_no, &per);

        printf("Data read: %s %d %.2f\n", name, roll_no, per);
        
        fclose(fptr);
    }
}

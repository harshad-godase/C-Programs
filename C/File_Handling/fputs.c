#include <stdio.h>

void main() {
    FILE *fptr;

    fptr = fopen("name.txt", "a");

    if (fptr == NULL) {
        printf("File not created!\n");
    } else {

        printf("\nFile is opened succesfully");

        fputs("\nharsh",fptr);

        printf("\nData written in file");
        fclose(fptr);
        printf("\nThe file is closed");
    }
}

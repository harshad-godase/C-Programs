#include <stdio.h>

void main() {
    FILE *fptr;

    fptr = fopen("name.txt", "r");

    if (fptr == NULL) {
        printf("File not created!\n");
    } else {

        char read = fgetc(fptr);

        printf("\nData read from file is : %c",read);
       
        fclose(fptr);
    }
}

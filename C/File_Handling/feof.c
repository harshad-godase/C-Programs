#include <stdio.h>

void main() {
    FILE *fptr;

    fptr = fopen("name.txt", "r");

    if (fptr == NULL) {
        printf("File not created!\n");
    } else {

        printf("\nFile is opened succesfully");


        printf("\nData read from file is:\n");
       
        while (!feof(fptr))
        {
            char read = fgetc(fptr);
            printf("%c",read);
        }
        
        fclose(fptr);
        printf("\nThe file is closed");
    }
}

#include <stdio.h>

void main() {

    FILE *fptr;
    
    char read[100];

    fptr = fopen("name.txt", "a+");

    if (fptr == NULL) {
        printf("File not created!\n");
    } else {

    printf("\nFile is opened succesfully");

    fgets(read,sizeof(read),fptr);
       

    printf("\nData read from file is : %s",read);

    while (!feof(fptr)) {
       fgets(read, sizeof(read), fptr);
       printf("%s", read);
    }
        fclose(fptr);
        printf("\nThe file is closed");
    }
}

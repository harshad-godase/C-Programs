#include <stdio.h>

void main() {
    FILE *fptr;

    fptr = fopen("name.txt", "a");

    char str[20];
    printf("\nEnter the String:");
    scanf("%s",&str);

    if (fptr == NULL) {
        printf("File not created!\n");
    } else {

        printf("\nFile is opened succesfully");

        fputs(str,fptr);
        fputs("\n",fptr);

        printf("\nData written in file");

        
        fclose(fptr);
        printf("\nThe file is closed");
    }
}

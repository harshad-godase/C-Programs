#include <stdio.h>

void main() {

    FILE *fptr;

    // store your name using fputc

    char name[20];

    printf("\nEnter your name:");
    scanf("%s",&name);
    


    fptr = fopen("name.txt", "w");

    if (fptr == NULL) {

        printf("File not created!\n");

    } else {

        for (int i = 0; name[i]!='\0'; i++)
        {
            putc(name[i],fptr);
        }

        printf("Name written successfully.\n");

        fclose(fptr);
    }
}

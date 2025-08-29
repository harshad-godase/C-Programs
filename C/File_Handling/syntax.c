#include <stdio.h>

void main() {
    FILE *fptr;//file pointer declaration

    char name[]="Welcome to file handling";

    float num =10.25;
    char harsh ='G';



    fptr = fopen("harshad.txt", "w");  // lowercase 'w'

    if (fptr == NULL) {
        printf("\nFile is not created/opened ");
    } else {
        printf("\nThe file is created/opened successfully");

        fprintf(fptr,"%s %d",name,100);
        fprintf(fptr,"\n%f %c",num,harsh);
        printf("\nData is written in file:");

        fclose(fptr);
        printf("\nFile is closed");
    }
}

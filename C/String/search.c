#include<stdio.h>

void main(){

    int found=0;
    int i;
    char str[30];

    puts("Enter the string:");
    gets(str);

    char c;
    printf("\nEnter the character for search:");
    scanf("%c",&c);
    
    for (i = 0; str[i] != '\0'; i++) {
        if (c == str[i]) {
            printf("\nCharacter found in string");
            found = 1;
            break;
        }
    }

     if (found == 0)
    {
       printf("\ncharacter not found in string");
    }

}

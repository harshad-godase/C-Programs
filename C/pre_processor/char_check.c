#include<stdio.h>

#define check_char(c) ( c >= 'A' && c <= 'Z' ? printf("\ncharacter is uppercase") : printf("\ncharacter lowercase"))

void main() {

    char ch;
    printf("Enter any character:");
    scanf("%c",&ch);

    check_char(ch);
}
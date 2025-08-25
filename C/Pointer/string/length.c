#include<stdio.h>

void main(){
    char name[10];
    char *ptr= name;
    int length=0;

    puts("Enter the string:");
    gets(name);

    while (*ptr!='\0')
    {
        length++;
        ptr++;
    }

    printf("\nLength of string is:%d",length);
    




}
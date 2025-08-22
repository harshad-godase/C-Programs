#include<stdio.h>
void main(){

    int count=0;

    char str[30];
    puts("Enter the string");
    gets(str);
    puts("you entered string is:");
    puts(str);

    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }

    printf("Length of string is:%d",count);
    
}
#include<stdio.h>

void main(){
    int i;
    char str[30];
    char cpy[30];

    puts("Enter the string:");
    gets(str);

    printf("\nBefore copying the string(str) is:%s",str);
    printf("\nBefore copying the string(cpy) is:%s",cpy);

    for ( i = 0; str[i]!=0; i++)
    {
        cpy[i]=str[i];
    }
    cpy[i]='\0';

    printf("\nAfter copying the string(str) is:%s",str);
    printf("\nAfter copying the string(cpy) is:%s",cpy);

    

}
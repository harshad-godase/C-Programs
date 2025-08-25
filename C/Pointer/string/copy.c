#include<stdio.h>

void main(){
    
    char str[30];
    char *ptr1=str;

    char cpy[30];
    char *ptr2=cpy;

    puts("Enter the string:");
    gets(str);

    printf("\nBefore copying the string(str) is:%s",str);
    printf("\nBefore copying the string(cpy) is:%s",cpy);

    while (*ptr1) // *ptr = 0
    {
        *ptr2++=*ptr1++;

       
    }
    *ptr2='\0';
    
    printf("\nAfter copying the string(str) is:%s",str);
    printf("\nAfter copying the string(cpy) is:%s",cpy);

    

}
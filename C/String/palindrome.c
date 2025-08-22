#include<stdio.h>

void main(){

    int flag=0,len=0;
    char str[30];
    
    puts("Enter the string:");
    gets(str);

    while (str[len]!='\0')
    {
       len++;
    }
    
    for ( int i = 0; i < len/2; i++)
    {
        if (str[i]!=str[len-i-1])
        {
           flag=1;
           break;
        }
        
    }

    if (flag==1)
    {
        printf("\nString is not palindrome");
    }
    else
        printf("\nString is palindrome");

    
}
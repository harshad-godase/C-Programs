#include<stdio.h>

void main(){
    int count=0;
    int i,j;
    char str1[30];
    char str2[30];

    puts("Enter the string:");
    gets(str1);

    for ( i = 0; str1[i]!=0; i++)
    {
       str1[i]=str1[i]-32;
    }
    printf("\nLower to uppercase:%s",str1);

    puts("\nEnter the second string:");
    gets(str2);

    for ( i = 0; str2[i]!=0; i++)
    {
        str2[i]=str2[i]+32;
    }
    printf("\nUpper to lowercase:%s",str2);







    
}
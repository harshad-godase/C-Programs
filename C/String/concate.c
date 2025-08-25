#include<stdio.h>

void main(){

    char str1[30];
    char *ptr1=str1;

    char str2[30];
    char *ptr2 = str2;

    puts("Enter the first string:");
    gets(str1);
    puts("Enter the second string:");
    gets(str2);

    while (*ptr1)
    {
        ptr1++;
    }
  
    while (*ptr2)
    {
      *ptr1=*ptr2;
      ptr1++;
      ptr2++;
    }
    *ptr1='\0';


    puts("Concate string is ");
    puts(str1);
    
}
#include<stdio.h>

void main(){
    int count=0;
    int i,j;
    char str1[30];
    char str2[30];

    puts("Enter the string:");
    gets(str1);
    puts("Enter the second string:");
    gets(str2);

   i=0;
   while (str1[i]!='\0')
   {
    i++;
   }

   for (j = 0; str2[j]!='\0'; j++)
   {
      str1[i]=str2[j];
      i++;
   }

   str1[i]='\0';
   

    puts("Concate string is ");
    puts(str1);
    
}
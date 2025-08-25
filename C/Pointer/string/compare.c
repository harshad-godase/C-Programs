#include<stdio.h>

void main(){
    int flag=0;

    char str1[30];
    char *ptr1=str1;

    char str2[30];
    char *ptr2 = str2;

    puts("Enter the first string:");
    gets(str1);
    puts("Enter the second string:");
    gets(str2);

   
  
    while (*ptr1||*ptr2)
    {
     if (*ptr1!=*ptr2)
     {
        flag=1;
        break;
     }
        ptr1++;
        ptr2++;
    }
     if (flag==0)
       {
        printf("\nStrings are equal");
       }else{
        printf("\nStrings are not equal");
       }
}
#include<stdio.h>

void main(){
    int i,j;
    char str1[30],str2[30];
    int flag=0;

    puts("Enter the string1:");
    gets(str1);

    puts("Enter the string2:");
    gets(str2);

   

       for ( i = 0; str1[i]!='\0'|| str2[i]!='\0'; i++)
       {
           if (str1[i]!=str2[i])
         {
           flag=1;
           break;
         }
       }

       if (flag==0)
       {
        printf("\nStrings are equal");
       }else{
        printf("\nStrings are not equal");
       }


    
}
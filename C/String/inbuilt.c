#include<stdio.h>
#include<string.h>
void main(){
    int i,j;
    char str1[30],str2[30];
    

    puts("Enter the string1:");
    gets(str1);


    //Length of string Inbuilt method

    int len= strlen(str1);
    printf("\nThe lengt of string1 is:%d",len);

    //Copy of string

    printf("\nBefore copy str1:%s",str1);
    printf("\nBefore copy str2:%s",str2);

    strcpy(str2,str1);

    printf("\nAfter copy str1:%s",str1);
    printf("\nAfter copy str2:%s",str2);

    //String equal
    int equal=strcmp(str1,str2);
    if (equal==0)
    {
        printf("\nStrings are equal");
    }else
         printf("\nStrings are not equal");
    

   //Concatination of string

   strcat(str1,str2);
   printf("\nConcatination of Strings are:%s",str1);

   //Reverse a string
   strrev(str1);
   printf("\nRevrse String1 is : %s",str1);

   //Convert to lowercase
   printf("\nString1 to lowercase is :%s",strlwr(str1));

   //Convert to uppercase
   printf("\nString2 to uppercase is :%s",strupr(str2));




}
#include<stdio.h>
void main(){

    for (int i = 0; i < 5; i++)
    {
        printf("\nTechno");
    }
    
    // while loop
    int a = 0;
    while (a < 5)
    {
        printf("\nScript");
        a++;
    }
    
    // do while loop

    int b = 0;
    do
    {
        printf("placement\n");
        b++;
    } while (b < 5);

    // print alphabetes from a to z using do while loop
    char ch = 'a';
    do
    {
        printf("%c", ch);
        ch++;
    } while (ch <= 'z');

    // count the number 
    int num;
    int count=0;
    printf("\nEnter the number:");
    scanf("%d",&num);

    do
    {
        count++;
        num=num/10;
    } while (num!=0);
    printf("\nCount of num is:%d",count);
}
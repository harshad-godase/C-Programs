#include<stdio.h>
void main(){
 
    int num;
    float f_num;
    double d_num;
    char ch;
    char st[20];

    printf("\nEnter character:");
    scanf("%c",&ch);

    printf("\nEnter String:");
    scanf("%s",&st);


    printf("\nEnter Integer num : ");
    scanf("%d",&num);

    printf("\nEnter float num :");
    scanf("%f",&f_num);

    printf("\nEnter doubble number:");
    scanf("%lf",&d_num);

    printf("\nCharacter is:%c",ch);
    printf("\nString is: %s",st);
    printf("\nInteger num is: %d",num);
    printf("\nFloat num is: %f",f_num);
    printf("\nDoubble num is: %lf",d_num);






}
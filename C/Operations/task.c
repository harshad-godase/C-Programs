#include<stdio.h>
void main(){
    int english, chem, maths, bio, marathi;

    printf("\nEnter the value of english: ");
    scanf("%d",&english);
    printf("\nEnter the value of chem: ");
    scanf(" %d",&chem);
    printf("\nEnter the value of maths: ");
    scanf(" %d",&maths);
    printf("\nEnter the value of bio :");
    scanf(" %d",&bio);
    printf("\nEnter the value of marathi: ");
    scanf(" %d",&marathi);

    int total = english+chem+maths+bio+maths;
    printf("\nTotal marks %d",total);
    float percentage = (total * 100) / 500; 
    printf("\npercentage is : %.2f",percentage);

    (percentage>35)?printf("\nYou are pass!!"):printf("\nYou are fail");
    
}
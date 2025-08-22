#include<stdio.h>
void main(){

    int a=20, b=7;

    a/=4;
    printf("%d",a);


    sizeof(int);
    printf("\n%d",sizeof(int));
    printf("\nsize of doubble is:%d",sizeof(double));
    printf("\nsize of float is : %d",sizeof(float));
    printf("\nsize of char is %d",sizeof(char));

    //Ternary operator ?:
      
    //Condition ? true : false;

    
    int num1=10, num2=45;

    int res = (num1>num2)? num1 : num2;
    printf("\n%d",res);

    int num3 ;
    printf("\nEnter the number");
    scanf("%d",&num3);

   ( num3 % 2 ==0) ? printf("\nEven number"): printf("\nOdd number") ;
    


   char ch;

   printf("\nEnter the char:");
   
   scanf(" %c",&ch);// scanf creates buffer because of previous int input so write " " before %c 


   ((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))? printf("\nIts Alphabet"):printf("\nIts Not alphabet");

   // 2 conditions

   int nber=10, nber2=5,  nber3=9;

   (nber>nber2)&&(nber>nber3) ? printf("%d",nber): (nber2>nber3)? printf("%d",nber2):printf("%d",nber3);


}
#include<stdio.h>
void main(){

    // Ascii value from A to Z
    for (char i = 'a'; i <='z'; i++)
    {
       printf("%c = %d\n",i,i);
    }
     for (char i = 'A'; i <='Z'; i++)
    {
       printf("%c = %d\n",i,i);
    }
    
    // Factorial number
    int num,fact=1;
    printf("\nEnter the number:");
    scanf("%d",&num);
    

    for (int i = 1; i <= num; i++)
    {
      fact*=i;     
    }
    printf("\nFacorial of number is: %d",fact);

    //Count the digits

    int count=0;
    do
    {
       count++;
       num/=10;
    } while (num!=0);
    printf("\nNumber has %d digits",count);


    // Do while operation until user exit

    float a,b,ans;
    printf("\nEnter two numbers:");
    scanf("%f %f",&a,&b);

    int choice;
    do
    {
        printf("\n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch (choice)
        {
        case 1:
            ans = a + b;
            printf("\nAddition is: %.2f", ans);
            break;
        case 2:
            ans = a - b;
            printf("\nSubtraction is: %.2f", ans);
            break;
        case 3:
            ans = a * b;
            printf("\nMultiplication is: %.2f", ans);
            break;
        case 4:
            ans = a / b;
            printf("\nDivision is: %.2f", ans);
            break;
        case 5:
            printf("\nExiting the program.");
            break;
        default:
            printf("\nInvalid choice. Please try again.");
            break;
        }
    } while (choice != 5);
    
               
            

    
    
}
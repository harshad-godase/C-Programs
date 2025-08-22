#include <stdio.h>

void main() {

    // Loan Eligibility 
    int age;
    float income;

    printf("Enter customer age: ");
    scanf("%d", &age);

    if (age > 21) {
        printf("Enter monthly income: ");
        scanf("%f", &income);

        if (income > 30000) {
            printf("Eligible for loan.\n");
        } else {
            printf("Not eligible: Income too low.\n");
        }
    } else {
        printf("Not eligible: Age must be above 21.\n");
    }

    //Type of Character using switch

    char ch;
    printf("Enter the character:");
    scanf(" %c",&ch);

    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
       printf("\nCharacter is Vowel");
        break;
    
    default:
    printf("\nCharacter is Consonant");
        break;
    }

    // Simple calculator using switch

    float num1,num2;
    char op;
    printf("\nEnter the number1:");
    scanf(" %f",&num1);

    printf("\nEnter the operation:");
    scanf(" %c",&op);

    printf("\nEnter the number2:");
    scanf(" %f",&num2);
    
    switch (op)
    {
    case '+':
        printf("Result= %.2f\n",num1+num2);
        break;
    
     case '-':
        printf("Result= %.2f\n",num1-num2);
        break;

      case '*':
        printf("Result= %.2f\n",num1*num2);
        break;
        
      case '/':
        printf("Result= %.2f\n",num1/num2);   
        break;
    
    default:
        printf("Invalid Operator");
        break;
    }

    // find max using switch

      int a, b, ans;

    printf("Enter two numbers: ");
    scanf(" %d %d", &a, &b);

    if (a>b)
    {
        ans=0;
    }
     else if(a<b){
        ans=1;
     }else{
        ans=2;
     } 

     switch (ans)
     {
     case 0:
        printf("\nMaximum number is:%d",a);
        break;
     case 1:
         printf("\nMaximum number is:%d",b);
         break;
    case 2:
         printf("\nBoath number are equal:%d",a);
         break;
    default:
          printf("\nInvalid Input ");
        break;
     }
}
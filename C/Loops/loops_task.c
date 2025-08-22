#include<stdio.h>
void main(){
        
    // print natural numbers
        int i = 1;
        int n;
        printf("\nEnter the number:");
        scanf("%d", &n);
        while (i <= n)
        {
            printf("%d", i);
            i++;
        }

        // print the even numbers
        for (int i = 1; i <=n; i++)
        {
            if (i % 2 == 0)
            {
                printf("\nEven numbers are:%d", i);
            }
            
        }
        
    
        

        //print sum of natural number;
        int sum=0;

        for (int i = 1; i <=n; i++)
        {
            sum+=i;
        }
        printf("\nSum of natural number is:%d",sum);


        //Sum of all Even numbers
        int Even_sum=0;

        for (int i = 0; i <= n; i+=2)
        {
           Even_sum+=i;
        }
        printf("\nEven number sum is:%d",Even_sum);


        // print natural number in reverse from n to 1
        printf("\nReverse natural number:");
        for (int i = n; i >= 1; i--)
        {
            printf("%d",i);
        }
        
}
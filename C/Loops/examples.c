#include<stdio.h>
void main(){

    int n;
    int count=0;
    printf("\nEnter the number:");
    scanf("%d",&n);

    for (int i = 1; i <=n; i++)
    {
        if(n%i==0){
            printf("%d\t",i);
        }
    
    }
      
    // prime number check

    for (int i = 1; i <=n; i++)
    {
         if(n%i==0){
            count++;
        }
    }
    if (count==2&&n>0)
    {
        printf("\nThe number is prime");
    }else{
        printf("\nNumber is Composite");
    }

    //Another way 
    int status=0;

    for (int i = 2; i <= n/2; i++)
    {
       if(n%i==0){
        status=1;
        break;
       }
    }
    if (status==1&&n>0)
    { printf("\nThe number is composite");
    }else{
        printf("\nNumber is prime");
    }
    
    
    
    
    
}
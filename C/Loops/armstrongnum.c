#include<stdio.h>
#include<math.h>

void main(){
    int n, temp,r,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);

    // Check if the number is an Armstrong number
    temp = n;
    while(n > 0){
        r = n % 10; 
        sum += r * r * r; // Calculate the cube and add to sum
        n = n / 10; 
    }

    // Alternative method using pow function
    //     r= n % 10; // Get the last digit
    //     sum = sum+round(pow(r, 3)); // Calculate the cube and add to sum
    //     n=n/10; // Remove the last digit
    
    // 
    if(sum == temp){
        printf("%d is an Armstrong number.\n", temp);
    }
    else{
        printf("%d is not an Armstrong number.\n", temp);
    }
}
#include<stdio.h>

void main() {
    int n, ans;
    printf("Enter the number:");
    scanf("%d",&n);
   for (int i = 1; i <= 10; i++)
    {
        ans = n*i;
        printf("%d * %d = %d\n",n,i,ans);
    }

}
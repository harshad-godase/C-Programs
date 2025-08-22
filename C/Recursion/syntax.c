#include<stdio.h>

int hello(int s , int e);

void main(){
    hello(1,5);
}
int hello(int s , int e){
    if(s<=e)
    {
        printf("\nHeloo");
    }else
    {
        return;
    }
    
    hello(s+1,e);
}
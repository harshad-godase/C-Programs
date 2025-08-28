#include<stdio.h>

void main(){
    auto int a=10; // local variable

    {
        auto int a=3;
        {
            auto int a=90;
            printf("%d",a);
        }
        printf("\n%d",a);
    }
        printf("\n%d",a);
}
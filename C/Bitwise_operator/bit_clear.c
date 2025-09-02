#include<stdio.h>

void main(){
    int num,bit;
    printf("\nENter the number:");
    scanf("%d",&num);

    printf("\nEnter the bit number (0-31):");
    scanf("%d",&bit);

    if (bit>0 && bit<32)
    {
         int res = (~(1<<bit)) & num;
         printf("\nClear the perticular %d bit is:%d",bit,res);
    }
    else
      printf("\nthe Bit number is invalid,(0-31)");
}
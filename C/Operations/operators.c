#include<stdio.h>
void main(){
     
    //8421
    //and , or, exor,right shift , left shift

    int num1=10, num2=8;
    int and,or,exor,right_shift,left_shift,comp1,comp2;

    and=num1 & num2;
    or= num1 | num2;
    exor= num1^num2;
    right_shift=num1>>1;
    left_shift=num2<<1;
    comp1 = ~num1;
    comp2 = ~num2;

    printf("\nAnding of 2 number is %d", and);
    printf("\nOring of 2 number is %d", or);
    printf("\nExoring of 2 number is %d", exor);
    printf("\nRight shifting of 2 number is %d", right_shift);
    printf("\nLeft shifting of 1 number is %d", left_shift);
    printf("\nComplement of 1st number(10) is %d", comp1);
    printf("\nComplement of 2nd number(8) is %d", comp2);
    
}
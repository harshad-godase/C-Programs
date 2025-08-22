#include<stdio.h>
void main() {
    float num = 72.40;
    int int_num = num; // Implicit typecasting from float to int
    printf("\n%d", int_num); 

    char ch = 'z';
    int char_to_int = ch; // Implicit typecasting from char to int
    printf("\n Char convert to int %d", char_to_int); // Output will be 122, ASCII value of 'z'


    int num1 =  78;
    char text ='F';
    float sum;
    sum = num1 + text;
    printf("\n%2f",sum);

    //Explicit 

    float value = 45.67;
    int int_value = (int)value; // Explicit typecasting from float to int
    printf("\nExplicit typecasting from float to int: %d", int_value); 

    int num2 = 100;
    char ch1= (char)num2; // Explicit typecasting from int to char
    printf("\nExplicit typecasting from int to char: %c", ch1); // Output will be 'd', ASCII value of 100


    int x=17 , y=5;
    double div;
    div = (double)x / y; // Explicit typecasting from int to double for division
    printf("\nDivision result with explicit typecasting: %lf", div); // Output will be 3.40


    int num3= 5;
    double num4= 2.5;
    double result;
    result = num3 + num4; // Implicit typecasting from int to double
    printf("\nImplicit typecasting from int to double: %lf", result); // Output will be 7.50

}
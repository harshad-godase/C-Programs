#include<stdio.h>

void area(float radius);
void diameter(float radius);
void circumference(float radius);

void main(){
    float radius;
    printf("\nEnter the radius of circle:");
    scanf("%f",&radius);
    area(radius);
    diameter(radius);
    circumference(radius);
}

void area(float radius){
    float circle = 3.14 * radius * radius;
    printf("\nArea of circle is : %.2f",circle);
}

void diameter(float radius){
    float diameter = 2 * radius;
    printf("\nDiameter of circle is : %.2f",diameter);
}

void circumference(float radius){
    float circumference = 2 * 3.14 * radius;
    printf("\nCircumference of circle is : %.2f",circumference);
}



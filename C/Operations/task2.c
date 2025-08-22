//accept the radius,find the diameter, circumference and area of circle

#include <stdio.h>
void main() {
    float radius, diameter, circumference, area;
    
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    
    diameter = 2 * radius;
    circumference = 2 * 3.14 * radius; // Using 3.14 as an approximation for Pi
    area = 3.14 * radius * radius; // Area formula: πr²
    
    printf("Diameter of the circle: %.2f\n", diameter);
    printf("Circumference of the circle: %.2f\n", circumference);
    printf("Area of the circle: %.2f\n", area);

//accept the fahrenheit, value and convert it to temperature in celsius

    float fahrenheit, celsius;
    
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);
    
    celsius = (fahrenheit - 32) * 5 / 9; // Conversion formula: C = (F - 32) * 5/9
    
    printf("Temperature in Celsius: %.2f\n", celsius);
}
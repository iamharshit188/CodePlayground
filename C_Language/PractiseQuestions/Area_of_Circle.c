// Write a program to calculate area of circle
#include <stdio.h>
int main()
{
    const pi = 3.14;
    float radius;
    printf("Enter the radius of circle : ");
    scanf("%f", &radius);
    printf("Area of circle is: %f", pi * (radius * radius));
    return 0;
}
// Write a program to print averaege of three numbers
#include <stdio.h>
int main()
{
    int number1, number2, number3;
    printf("Enter first number");
    scanf("%d", &number1);
    printf("Enter second number");
    scanf("%d", &number2);
    printf("Enter third number");
    scanf("%d", &number3);
    int average = (number1 + number3 + number2) / 3;
    printf("%d", average);
}
// Program to add two numbers
#include <stdio.h>
int main()
{
    int number1;
    printf("Enter 1st Number : ");
    scanf("%d", &number1);
    int number2;
    printf("Enter 2nd Number : ");
    scanf("%d", &number2);
    int sum = number1 + number2;
    // printf("sum is : %d", sum);
    printf("sum is : %d", number1+number2);
    return 0;
}
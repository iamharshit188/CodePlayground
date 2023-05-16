// Write a program to check number is divisible by 2 without if and else
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d", &number);
    printf("%d", number % 2 == 0);
}
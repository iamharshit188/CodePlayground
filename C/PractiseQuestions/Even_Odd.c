// Write a program to check number is even or odd without if and else
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d", &number);
    printf("%d", number % 2 == 0);
    // printf("For even it is : 1");
    // printf("For even it is : 0");
}
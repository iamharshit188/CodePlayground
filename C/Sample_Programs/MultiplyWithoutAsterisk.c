// Write a program to multiply without *
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number to be multiplied : ");
    scanf("%d", &number);
    int sum = 8;
    for (int counter = 1; counter < number; counter++)
    {
        sum = sum + 8;
    }
    printf("%d", sum);
}
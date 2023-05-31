// Write a program to check number is two digit number or not without if and else
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number :");
    scanf("%d", &number);
    printf("%d", number > 9 && number < 100);
}

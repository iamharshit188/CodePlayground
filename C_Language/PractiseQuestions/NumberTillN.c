// Write a program to print number till n using for and while loop
#include <stdio.h>
int main()
{
    int number;
    int counter = 0;
    printf("Enter number : ");
    scanf("%d", &number);
    while (counter <= number)
    {
        printf("%d , ", counter);
        counter++;
    }
}
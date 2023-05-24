#include <stdio.h>
int main()
{
    // Program to print sum of n natural numbers
    int number;
    int sum = 0;
    printf("Enter a number : ");
    scanf("%d", &number);
    for (int counter = 1; counter <= number; counter++)
    {
        // printf("%d \n", counter);
        sum = sum + counter;
    }
    printf(" Sum of N natural numbers is :  %d \n ", sum);
    for (int counter = number; counter >= 1; counter--)
    {
        printf("%d \n", counter);
    }
}

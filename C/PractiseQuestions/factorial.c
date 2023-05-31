// Programt to find factorial of a number
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    int factorial = 1;
    // int factorial;
    for (int counter = number; counter >= 1; counter--)
    {
        factorial = counter * factorial;
    }
    printf("Factorial :  %d", factorial);
}
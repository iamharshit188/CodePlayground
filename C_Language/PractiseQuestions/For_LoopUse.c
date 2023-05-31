// Write a program to print number 0-100 using for loop.
#include <stdio.h>
int main()
{
    for (int counter = 0; counter <= 100; counter++)
    {
        printf("%d \n", counter);
    }
    for (char counter1 = 'a'; counter1 <= 'z'; counter1++)
    {
        printf("%c \n", counter1);
    }
    for (float counter2 = 1.0; counter2 <= 10.0; counter2++)
    {
        printf("%f \n", counter2);
    }
}
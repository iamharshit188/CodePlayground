// Print multiplication of any number
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    for (int counter = 1; counter <= 10; counter++)
    {
        int temp = 0;
        temp = number * counter;
        printf("%d \n", temp);
    }
}
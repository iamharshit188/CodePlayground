//Take input from user as long user enters a number which is not divisible of 7
#include <stdio.h>
int main()
{
    int number;
    for (;;)
    {
        printf("Enter a number : ");
        scanf("%d", &number);
        if (number % 7 == 0)
        {
            printf("LOL Terminated :)");
            break;
        }
    }
}

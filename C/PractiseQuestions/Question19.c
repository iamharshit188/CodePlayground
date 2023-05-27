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
// Keep taking input from user as long as user inputs even number terminate when enters odd.
#include <stdio.h>
int main()
{
    int number;
    printf("If u input odd u looooooose: ");
    // scanf("%d", &number);
    for (;;)
    {
        if (number % 2 == 0)
        {
            printf("Enter another number : ");
            scanf("%d", &number);
        }
        else
        // (number % 2 != 0)
        {
            printf("LOL terminated :) ");
            break;
        }
    }
}

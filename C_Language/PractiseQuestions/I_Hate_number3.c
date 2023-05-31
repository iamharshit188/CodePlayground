// Print all number except multiple of 3
#include <stdio.h>
int main()
{
    for (int counter = 1; counter < 1000; counter++)
    {
        if (counter % 3 == 0)
        {
            printf("Unlucky number 3 :( \n");
            continue;
        }
        printf("%d \n", counter);
    }
}
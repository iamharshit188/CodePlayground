// Print reverse of a table
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    for (int counter = 10; counter >= 1; counter--)
    {
        printf(" %d \n", (counter * number));
    }
}
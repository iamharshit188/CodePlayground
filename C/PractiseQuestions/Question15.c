#include <stdio.h>
int main()
{
    int number;
    scanf("%d", &number);
    int counter = 0;
    do
    {
        printf("%d \n", counter);
        counter++;
    } while (counter < number);
}
// Program to print cube of any number given by the user
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d ", &number);
    printf("Cube of %d", (number * number * number));
    // printf("Cube of %d", number, " is ", number * number * number);
    return 0;
}
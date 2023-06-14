// Program to take input as a string
#include <stdio.h>
int main()
{
    printf("Enter your name's length : ");
    int length;
    scanf("%d", &length);
    char name[length];
    printf("Enter your name: ");
    scanf("%s", &name);
    printf("%s", name);
}
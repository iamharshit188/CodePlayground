// Write a program to input his / her name and last name and print it's character one by one
#include <stdio.h>
void PrintCharacters(char arr[]);
int main()
{
    char name[] = "Harshit";
    char lastName[] = "Tiwari";
    PrintCharacters(name);
    PrintCharacters(lastName);
}
void PrintCharacters(char arr[])
{
    for (int counter = 0; arr[counter] != '\0'; counter++)
    {
        printf("%c\t", arr[counter]);
    }
    printf("\n");
}
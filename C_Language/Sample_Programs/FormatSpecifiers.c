/*
Format specifiers in C are used to take inputs and print the output of a type. The symbol we use in every format specifier is %. Format specifiers tell the compiler about the type of data that must be given or input and the type of data that must be printed on the screen.25-Apr-2023
*/
// Example of Format Specifiers in C are :
#include <stdio.h>
int main()
{
    int number;
    char star;
    float floating_number;
    printf("Enter a number \n");
    scanf("%d", &number);
    printf("Enter a star \n");
    scanf("%c", &star);
    printf("Enter a floating integer \n");
    scanf("%f", &floating_number);
    // Here in the scanf statment above format specifiers specifies the datatype of the varibles and takes input from the user.
    printf("%d", number);
    printf("%c", star);
    printf("%f", floating_number);
    return 0;
}

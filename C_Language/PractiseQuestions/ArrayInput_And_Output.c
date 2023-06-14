// Input in Array and Output in Array
#include <stdio.h>
int Input(int n);
int Output(int n);
int main()
{
    int input;
    printf("Enter how many Elements would you like to insert into the Array : ");
    scanf("%d", &input);

    int output;
    printf("Enter how many Elements would you like to see present in the Array : ");
    scanf("%d", &output);

    Input(input);
    Output(output);
}

Input(int n)
{
    int marks[n];
    for (int counter = 0; counter < n; counter++)
    {
        printf("Enter element number %d \n ", counter);
        scanf("%d", &marks[counter]);
    }
}
Output(int n)
{
    int marks[n];
    for (int counter = 0; counter < n; counter++)
    {
        // printf("Element are ");
        // // printf("%d", &marks[counter]);
        // printf("%d \n", marks[counter]);
        printf("Elements are : %d \n", marks[counter]);
    }
}
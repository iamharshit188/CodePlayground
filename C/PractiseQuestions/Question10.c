// Write a program to Assign A B C grades to a student on the basis of following critera
// if marks are between 1 - 15 then C
// if marks are between 16 - 25 then B
// if marks are between 25 - 30 then B

#include <stdio.h>
int main()
{
    int marks;
    printf("Hi , Enter marks obtained: ");
    scanf("%d", &marks);
    if (marks >= 25 && marks <= 30)
    {
        printf("Your grade is : A");
    }
    else if (marks > 15 && marks < 25)
    {
        printf("Your graded is : B");
    }
    else if (marks <= 15)
    {
        printf("Your grade is : C");
    }
    else
    {
        printf("Wrong marks entered :)");
    }
}
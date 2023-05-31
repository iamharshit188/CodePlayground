#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age");
    scanf("%d", &age);
    // <--- In a single line using Ternary operators --->
age >= 18 ? printf("Adult \n") : printf("You are a kid :)");
    // if (age > 18)
    // {
    //     printf("You are adult :)");
    //     printf("You can drive but drive carefully");
    //     printf("You can also vote ;)");
    // }
    // else if(age > 13)
    // {
    //     printf("You're a teen, learn more from your experiences :)");
    // }
    // else
    // {
    //     printf("Kid , enjoy your life :)");
    // }
}
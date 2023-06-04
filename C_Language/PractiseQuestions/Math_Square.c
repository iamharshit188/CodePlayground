// To calculate square of a number
// To compile this program use : " gcc -o square Question4.c -lm "
// #include <stdio.h>
// #include <math.h>
/*
int main()
{
    double number, square;
    printf("Enter a number: ");
    scanf("%lf", &number);
    square = pow(number, 2);
    printf("The square of %.2f is %.2f\n", number, square);
    return 0;
}
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int number;
    printf("Enter a number : ");
    scanf("%d", &number);
    int square = pow(number, 2);
    printf("Square of", number, " is: ", square);
}
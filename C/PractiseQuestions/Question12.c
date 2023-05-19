// // Write a program to check if it is Armstrong number or not ;
// #include <stdio.h>
// int main()
// {
//     int number;
//     int temp = 0;
//     int cube;
//     printf("Enter a number : ");
//     scanf("%d", &number);
//     for (int counter = number; counter <= 1; counter = counter / 10)
//     {
//         cube = number * number * number;
//         temp = temp + cube;
//         printf("%d", temp);
//     }
//     if (temp == number)
//     {
//         printf("It is Armstrong number");
//     }
//     else
//     {
//         printf("It is not an Armstrong number");
//     }
// }

#include <stdio.h>
#include <math.h>

int isArmstrongNumber(int number);

int main()
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isArmstrongNumber(number))
    {
        printf("%d is an Armstrong number.\n", number);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", number);
    }

    return 0;
}

int isArmstrongNumber(int number)
{
    int originalNumber, remainder, result = 0, n = 0;
    originalNumber = number;
    // Count the number of digits
    while (originalNumber != 0)
    {
        originalNumber /= 10;
        ++n;
    }
    originalNumber = number;
    // Calculate the sum of each digit raised to the power of the number of digits
    while (originalNumber != 0)
    {
        remainder = originalNumber % 10;
        result += pow(remainder, n);
        originalNumber /= 10;
    }
    // Check if the result is equal to the original number
    if (result == number)
    {
        return 1; // It is an Armstrong number
    }
    else
    {
        return 0; // It is not an Armstrong number
    }
}

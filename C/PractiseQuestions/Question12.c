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
int main()
{
    int num, originalNum, remainder, result = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0)
    {
        // remainder contains the last digit
        remainder = originalNum % 10;
        result += remainder * remainder * remainder;
        // removing last digit from the orignal number
        originalNum /= 10;
    }
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
// Taken from Programmiz : https://www.programiz.com/c-programming/examples/check-armstrong-number

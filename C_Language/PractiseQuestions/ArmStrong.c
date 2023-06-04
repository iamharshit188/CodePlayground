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
    int num, num1, rem, res = 0;
    printf("Enter a three-digit integer: ");
    scanf("%d", &num);
    num1 = num;
    if (num1 > 0)
    {
        if (num > 0)
        {
            if (num1 > 0)
            {
                rem = num1 % 10;
                res += rem * rem * rem;
                // removing last digit from the orignal number
                num1 /= 10;
            }
            rem = num1 % 10;
            res += rem * rem * rem;
            // removing last digit from the orignal number
            num1 /= 10;
        }
        rem = num1 % 10;
        res += rem * rem * rem;
        // removing last digit from the orignal number
        num1 /= 10;
    }
    if (res == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);
    return 0;
}
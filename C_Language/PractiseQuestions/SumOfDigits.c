// Write a program to print the sum of digits  of a number entered by the user.
#include <stdio.h>
int sumofDigit(int n);
int main()
{
	int input;
	printf("Enter a number");
	scanf("%d", &input);
	sumofDigit(input);
	//	printf("Sum of digit is : %d " , sumofDigit(input));
}
int sumofDigit(int n)
{
	if (n == 0)
	{
		return 0;
	}
	int temp = 0;
	temp = sumofDigit(n % 10);
	int sum = 0;
	sum = sum + temp;
	printf("Sum = %d", sum);
}

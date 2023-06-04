// Write a program to print Fibonacci Sequence of a given number
#include <stdio.h>
int fibonacci(int n);
int main()
{
	int number;
	printf("Enter a number ");
	scanf("%d", &number);
	fibonacci(number);
}

int fibonacci(int n)
{
	if (n == 0)
	{
		return 0;
	}
	if (n == 1)
	{
		return 1;
	}
	int Nm1 = fibonacci(n - 1);
	int Nm2 = fibonacci(n - 2);
	int FibN = Nm1 + Nm2;
	printf("Fibonacci of %d is %d \n", n, FibN);
}

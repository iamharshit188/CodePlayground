// Write a program to calculate sum product and average of 2 number. And print it in main() function.
#include <stdio.h>
int doWork(int a, int b, int *sum, int *avg, int *prod);
int main()
{
	int number1;
	int number2;
	printf("Enter First Number : ");
	scanf("%d", &number1);
	printf("Enter Second Number : ");
	scanf("%d", &number2);
	int sum, avg, prod;
	doWork(number1, number2, &sum, &avg, &prod);
	printf("Sum of %d and %d is %d\n", number1, number2, sum);
	printf("Product of %d and %d is %d\n", number1, number2, prod);
	printf("Average of %d and %d is %d", number1, number2, sum);
}

int doWork(int a, int b, int *sum, int *avg, int *prod)
{
	*sum = a + b;
	*avg = (a + b) / 2;
	*prod = a * b;
}

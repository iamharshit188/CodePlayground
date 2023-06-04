// Write a program to print table of a number using function;
#include <stdio.h>
int table();
int main()
{
	int number;
	printf("Enter a number : ");
	scanf("%d", &number);
	table(number);
}

int table(int num)
{
	for (int counter = 1; counter <= 10; counter++)
	{
		/*
		int temp = 0;
		temp = counter * num;
		printf("%d \n"  , temp);
	*/
		printf("%d \n", counter * num);
	}
}

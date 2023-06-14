// Write a program to Swap two numbers using Call Reference
#include <stdio.h>
void swap(int *a, int *b);
int number1;
int number2;

int main()
{
	printf("Enter First number ");
	scanf("%d", &number1);
	printf("Enter Second number ");
	scanf("%d", &number2);
	swap(&number1, &number2);
}

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
	printf("A %d \n", number1, *a);
	printf("B %d \n", number2, *b);
}

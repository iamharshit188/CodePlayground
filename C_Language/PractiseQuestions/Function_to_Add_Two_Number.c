// Write a program to add two numbers using functions
#include <stdio.h>
int addtwoNum();
int main()
{
	int num1, num2;
	printf("Enter first number : ");
	scanf("%d", &num1);
	printf("Enter second number : \n");
	scanf("%d", &num2);
	int sum = addtwoNum(num1, num2);
	printf("sum is : %d", sum);
}

int addtwoNum(int a, int b)
{
	return a + b;
}

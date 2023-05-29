//Write a program to return square of a number using library functions
#include<math.h>
#include<stdio.h>
int main()
{
	int number ;
	printf("Enter a number :");
	scanf("%d", &number);
	int square = pow(number,2);
	printf("%d", square);
}


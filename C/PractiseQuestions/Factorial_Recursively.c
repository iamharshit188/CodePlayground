//Write a program to print Factorial of a number using Recursion.
#include<stdio.h>
int Factorial();
int main()
{
	printf("Enter a number ");
	int number ; 
	scanf("%d" , &number);
	printf("Factorial : %d " , Factorial(number));
}

int Factorial(int number)
{	
	if(number == 1)
	{	
		return 1 ;
	}
	int sum = (Factorial(number - 1) * number);
	return sum;
}


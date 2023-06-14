// Write a program to Store n Fibonacci numbers in an Array
#include <stdio.h>
int main()
{
	int number;
	printf("Enter a number n ");
	scanf("%d",&number);
	int Fib[number];
	Fib[0]=0;
	Fib[1]=1;
	//Since fibonacci of 0 is 0 whereas for 1 is 1.
	for(int counter = 2;counter<number;counter++)
	{
		Fib[counter]=Fib[counter-1]+Fib[counter-2];
	}
	printf("Fibonacci numbers are \n");
	for(int counter = 0;counter<number;counter++)
	{
		printf("%d\t",Fib[counter]);
	}
		
}


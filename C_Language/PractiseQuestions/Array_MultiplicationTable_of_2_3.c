// Write a program to create an 2D array and store table of any two numbers in it
#include <stdio.h>
void CalTable(int table[][10], int n, int m, int Number);
int main()
{
	int table[2][10];
	int Number1, Number2;
	printf("Enter the First number whose table you want to see: ");
	scanf("%d", &Number1);
	printf("Enter the Second number whose table you want to see: ");
	scanf("%d", &Number2);
	CalTable(table, 0, 1, Number1);
	CalTable(table, 1, 1, Number2);
	printf("Table of %d is:\n", Number1);
	for (int counter = 0; counter < 10; counter++)
	{
		printf("%d\t", table[0][counter]);
	}
	printf("\n");
	printf("Table of %d is: \n", Number2);
	for (int counter = 0; counter < 10; counter++)
	{
		printf("%d\t", table[1][counter]);
	}
}
void CalTable(int table[][10], int n, int m, int Number)
{
	for (int counter = 0; counter < 10; counter++)
	{
		table[n][counter] = ((counter + 1) * Number);
	}
}
/* Note when passing MultiDimensional Array as Parameters we have to assign/declare the range of other dimensions other than 1st Dimension because in MultiDimensional Arrays First dimension is passed as a pointer but the second one is passed as an array only
So
void CalTable(int table[][10], int n, int m, int Number);
We passed 10 as the range in it,
*/
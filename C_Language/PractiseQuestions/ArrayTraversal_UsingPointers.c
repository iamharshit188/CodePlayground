//Program to take input and print output in an Array using Pointers.
#include<stdio.h>
int main()
{
	int number;
	printf("Enter the number of Array Elements you would like to input ");
	scanf("%d",&number);
	int array[number];
	int *ptr = &array[0];
	for(int counter = 0 ; counter < number; counter++)
	{
		printf("Enter element for %d index ", counter);
		scanf("%d" , (ptr + counter));
	}
	for(int counter = 0 ; counter < number; counter++)
	{
	//	printf("Element for %d index is %d \n", counter , *(ptr + counter));
		printf("%d \t", counter , *(ptr + counter));
	}


}

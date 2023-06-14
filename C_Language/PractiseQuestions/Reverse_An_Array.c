// Write a function to reverse an array
#include <stdio.h>
int Rev(int array[], int range);
int main()
{
	int range;
	printf("Enter size of the array ");
	scanf("%d", &range);
	int arr[range];
	for (int counter = 0; counter < range; counter++)
	{
		printf("Enter %d element ", counter);
		scanf("%d", &arr[counter]);
	}
	printf("Reversed Array is : \n");
	Rev(arr, range);
}
int Rev(int array[], int range)
{
	for (int counter = 0; counter < range / 2; counter++)
	{
		int FirstValue = array[counter];
		int SecondValue = array[range - counter - 1];
		array[counter] = SecondValue;
		array[range - counter - 1] = FirstValue;
		/*
		This also can be used for solving it
		int FirstValue = array[counter];
		array[counter] = array[range - counter - 1];
		array[range - counter - 1] = FirstValue;
		*/
	}
	for (int counter = 0; counter < range; counter++)
	{
		printf("%d\t", array[counter]);
	}
}
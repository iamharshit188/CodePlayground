//Write a program to count number of ODD numbers in an Array
#include<stdio.h>
int OddNumber(int arr[] , int range);
int main()
{
	int range;
	printf("Declare the range of the array ");
	scanf("%d", &range);
	int arr[range];
	printf("Enter the elements in your arrary \n");
	for(int counter = 0 ; counter < range;counter++)
	{
		printf("Enter %d element of the array: " , counter);
		scanf("%d" , &arr[counter]);
	}
	printf("Odd Numbers in the Array are : \n");
	OddNumber(arr, range);

}

int OddNumber(int arr[] , int range)
{
	int temp = 0 ;
	for(int counter = 0 ;counter < range;counter++)
	{

		if(arr[counter]%2 == 0)
		{
			continue;
		}
		else 
		{
			printf("%d \n" , arr[counter]);
			temp = temp + 1;
		}
	}
	printf("Number of Odd number: %d" , temp);
}


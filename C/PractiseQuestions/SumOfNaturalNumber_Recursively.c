//Write a recursive function to calculate sum of first n natural numbers
#include<stdio.h>
int NaturalNumber();
int main()
{
	int number; 
	printf("Enter a number n ");
	scanf("%d",&number);
	printf("Sum is : %d " , NaturalNumber(number));

}
int NaturalNumber(int num)
{
	if(num == 1)
	{
		return 1;
	}
	int sumNm1 = NaturalNumber(num -1);// Sum of 1 to (n-1)
	int sumN = sumNm1 + num;
	return sumN;
}

	

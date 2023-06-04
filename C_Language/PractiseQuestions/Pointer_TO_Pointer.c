//Write a program to print pointer to pointer value of Variable I
#include<stdio.h>
int main()
{
	int I = 5;
	int *ptr = &I;
	int **pptr = &ptr;
	printf("The Address of ptr is : %p \n" , ptr);
	printf("The Address of pptr is : %p \n" , pptr);
	printf("The value of ptr is : %d \n" , *ptr);
	printf("The Value of I using Pointer to Pointer Reference is : %d" , **(pptr));

}

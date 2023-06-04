// Printing Address of a a variable
#include <stdio.h>
int main()
{
	int age = 22;
	int *ptr = &age;
	// Adress of age
	printf("Adress of age Variable using Age Variable : %p \n", &age);
	// Adress of age using ptr variable
	printf("Adress of age Variable using Pointer : %p \n", ptr);
	printf("Adress of Pointer ptr : %p", &ptr);
}

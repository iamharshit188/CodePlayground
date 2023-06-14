#include <stdio.h>
void check();
int main()
{
	int n = 4;
	printf("Address of N in main function is : %p \n", &n);
	printf("Address of N in main function in Unsigned int is  : %u \n", &n);
	check(n);
}
void check()
{
	int n = 4;
	printf("Address of N in void function is : %p \n", &n);
	printf("Address of N in void function in Unsigned int is  : %u \n", &n);
}

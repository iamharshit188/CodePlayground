//Recursion example
#include<stdio.h>
void printHW();
int main()
{
	int num = 5;
	printHW(num);
}
//Recursive Function which is calling itself
void printHW(int count)
{
	if(count ==0)
	{
		return;
	}
	printf("Hello World \n");
	printHW(count -1);
}


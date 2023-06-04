// Write a program to print Namaste if user is Indian and Bonjour if user is French and Hi! if user is American

#include <stdio.h>
void indian();
void french();
void english();

int main()
{
	char input;
	printf("Please enter your nationality :) ");
	scanf("%c", &input);
	if (input == 'I' || input == 'i')
		indian();
	else if (input == 'f' || input == 'F')
		french();
	else if (input == 'e' || input == 'E')
		english();
}

void indian()
{
	printf("Namaste !");
}
void french()
{
	printf("Bonjour !");
}
void english()
{
	printf("Hi !");
}

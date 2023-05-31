//Program to Convert celsius to Fahrenheit :)
#include<stdio.h>
float Convert(float temp);
int main()
{
	float number;
	printf("Enter a number : ");
	scanf("%f" , &number);
	printf("Temp in F is %f", Convert(number));
}
float Convert(float temp)
	{
		float far = temp * (9.0/5.0)+32;
		return far;
	}


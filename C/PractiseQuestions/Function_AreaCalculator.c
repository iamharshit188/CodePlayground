//Write a program to calculate Area of square Rect and Circle using functions
#include<stdio.h>
void circle();
void rectangle();
void square();
int main()
{
	char input;
	printf("Welcome to Area calculator :) , Enter your choice to continue \n");
	printf("Enter R for Rectangle S for Square and C for Circle \n");
	scanf("%c", &input);
	
	if(input=='S')
	{
		square();
	}
	else if(input =='R')
	{
		rectangle();
	}
	else if(input =='C')
	{
		circle();
	}
	else 
	{
		printf("Wrong choice :(");
	}
}
 void square()
	{
		int side ;
		printf("Enter side of the square \n");
		scanf("%d", &side);
		printf("%d" , (side*side));
	}	
void rectangle()
	{
		int length;
		printf("Enter length of rectangle : \n");
		scanf("%d" , &length);
		int breadth;
		printf("Enter breadhth of rectangle : \n");
		scanf("%d" , &breadth);
		printf("Area : %d" , length*breadth);
	}
void circle()
	{
		int radius ;
		printf("Enter radius of Circle : \n");
		scanf("%d", &radius);
		int area = 3.14 *(radius*radius);
		printf("%d", area);
	}	
	
	
	
	

// Write a program to print Percentage of three Subjects obtained by a Student
#include <stdio.h>
float percentage(float m1, float m2, float m3);
int main()
{
	float Physics, Chemistry, Maths;
	printf("Enter marks obtained in Physics: ");
	scanf("%f", &Physics);
	printf("Enter marks obtained in Chemistry: ");
	scanf("%f", &Chemistry);
	printf("Enter marks obtained in Maths: ");
	scanf("%f", &Maths);
	printf("Your percentage is : %f", percentage(Physics, Chemistry, Maths));
}

float percentage(float m1, float m2, float m3)
{
	int sum = m1 + m2 + m3;
	return (sum * 0.3);
}

//Write a program to ask User to Input User's Name and Name
#include<stdio.h>
int main()
{
	char str[40];
	printf("Enter your name");
	// scanf("%s",fullname);
	// ScanF cannot take multiword strings
	fgets(str , 40 ,stdin);
	puts(str);
	printf("Name Entered is : %s" ,str);
}



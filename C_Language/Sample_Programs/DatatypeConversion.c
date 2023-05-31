#include<stdio.h>
int main()
{
    // int number = 12.32321;  <-- Here this will give an error during compilation. So we need to explicitly cast it to datatype required.
int number = (int)12.32321;
printf("%d" , number);

}
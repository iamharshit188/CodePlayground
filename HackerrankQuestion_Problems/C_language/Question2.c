/*
  Task

Your task is to take two numbers of int data type, two numbers of float data type as input and output their sum:

    Declare 

variables: two of type int and two of type float.
Read
lines of input from stdin (according to the sequence given in the 'Input Format' section below) and initialize your
variables.
Use the
and operator to perform the following operations:

    Print the sum and difference of two int variable on a new line.
    Print the sum and difference of two float variable rounded to one decimal place on a new line. 
  */
#include <stdio.h>
int main()
{
  int FirstVariable ;
  int SecondVariable;
  float FloatFirst;
  float FloatSecond;
  scanf("%d" , &FirstVariable);
  scanf("%d" , &SecondVariable);
  scanf("%f" , &FloatFirst);
  scanf("%f" , &FloatSecond);
  /*printf("%d " ,  (FirstVariable + SecondVariable ) );
  printf("%d \n" ,  (FirstVariable - SecondVariable ) );
  printf("%f" ,  (FloatSecond + FloatFirst) );
  printf("%f" ,  (FloatFirst - FloatSecond) );*/
}

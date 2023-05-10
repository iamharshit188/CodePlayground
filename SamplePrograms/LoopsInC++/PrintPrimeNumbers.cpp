#include <iostream>
using namespace std;
// Program to print all prime numbers between two digits
int main()
{
  int number1;
  cout << "Enter first number";
  cin >> number1;
  cout << "Enter second number";
  cin >> number1;
  int number2;
  for (int counter = number1; counter < number2; counter++)
  {
    int temp;
    for (temp = 2; temp < counter; temp++)
    {
      if (counter % temp)
      {
        break;
      }
    }
    if (temp == counter)
    {
      cout << counter;
    }
  }
}
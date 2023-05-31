// Write a program to print all the numbers divisible by 2 and skip the ones which are divisible by 2;
#include <iostream>
#include <ostream>
using namespace std;
int main()
{
  int number;
  for (number = 0; number < 100; number++)
  {
    if (number % 3 == 0)
    {
      continue;
    }
    cout << number << endl;
  }
}

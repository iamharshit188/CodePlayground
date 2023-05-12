#include <iostream>
using namespace std;
int main()
{
  int number;
  cout << "Enter the numeber you wanna check: ";
  cin >> number;
  for (int counter = 2; counter < number; counter++)
  {
    if (number % counter == 0)
    {
      cout << "NonPrime";
      break;
    }
    else
    {
      cout << "Prime number";
      break;
    }
  }
}
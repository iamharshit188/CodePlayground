// Program to take N number of input from user until and unless user inputs negative number , using while loop.
#include <iostream>
using namespace std;
int main() {
  int input = 1;
  cout << "Enter a non negative number : ";
  cin >> input;
  while (input >= 0) {
    cout << "Enter a number: ";
    cin >> input;
  }
  cout << "terminated";
  return 0;
}
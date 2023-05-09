// Write a program to calculate sum till number N
#include <iostream>
using namespace std;

int main() {
  int number;
  cin >> number;
  int sum = 0;
  for (int counter = 0; counter <= number; counter++) {
    sum = sum + counter;
  }
  cout << "Sum of number is: ";
  cout << sum;
}
#include <iostream>
using namespace std;

int main() {
  int number1;
  cout << "Enter first number: ";
  cin >> number1;
  int number2;
  cout << "Enter second number: ";
  cin >> number2;
  char op;
  cout<<"Enter a operator ";
  cin >> op;
  switch (op) {
    case '+':
    cout << number1 + number2;
    break;
    case '-':
    cout << number1 - number2;
    break;
    case '*':
    cout << number1 * number2;
    break;
    case '/':
    cout << number1 / number2;
    break;
    case '%':
    cout << number1 % number2;
    break;
    default :
    cout <<"Wrong operator";
    break;
  }
}
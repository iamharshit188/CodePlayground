#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int number;
    cout << "Enter a number to check divisibility";
    cin >> number;
    if (number % 2 == 0 && number % 3 == 0)
    {
        cout << "It is divisible by 2 and 3";
    }
    else if (number % 2 == 0)
    {
        cout << "Number is divisible by 2";
    }
    else if (number % 3 == 0)
    {
        cout << "Number is divisible by 3";
    }
    else{
        cout<<"Number not divisble by any";
    }
        return 0;
}

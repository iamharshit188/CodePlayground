// Write a program to print this Pattern
/*
****
****
****
****
****
*/
#include <iostream>
using namespace std;
int main()
{
    for (int counter1 = 1; counter1 <= 5; counter1++)
    {
        for (int counter2 = 1; counter2 <= 4; counter2++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
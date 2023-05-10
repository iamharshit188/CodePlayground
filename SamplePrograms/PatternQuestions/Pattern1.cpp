// Write a program to print this Pattern
/*
****
****
****
****
****
Or the number or rows and columns user enters
*/
#include <iostream>
using namespace std;
int main()
{
    int rows;
    int columns;
    cout<<"Enter number of ROWs";
    cin >> rows;
    cout<<"Enter number of coulumns";
    cin >> columns;
    for (int counter1 = 1; counter1 <= rows; counter1++)
    {
        for (int counter2 = 1; counter2 <= columns; counter2++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
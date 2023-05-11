#include <iostream>
using namespace std;
int main()
{//To terminate program on
    for (int i = 0; i < 50; i++)
    {
        cout << i << endl;
        if (i == 2)
        {
            break;
        }
    }
}
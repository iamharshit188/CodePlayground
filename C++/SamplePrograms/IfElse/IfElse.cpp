#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
  // If else program to hangout with any friend.
  int money;
  cin >> money;
  if (money > 5000)
  {
    if (money < 7000)
    {
      cout << "Just watch a movie and have fun";
    }
    else
    {
      cout << "Go out with Friends";
    }
  }
  else
  {
    if (money > 3000)
    {
      cout << "Order yourself your favorite food :)";
    }
    else
    {
      cout << "Stay back home and learn C++";
    }
  }
  return 0;
}

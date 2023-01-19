#include <iostream>
using namespace std;

int main()
{
  int x, y, z;
  cin >> x >> y >> z;
  if ((x - y) < 0)
  {
    if (abs(x - y) <= z)
    {
      cout << "?";
    }
    else
    {
      cout << "-";
    }
  }
  else if ((x - y) > 0)
  {
    if (abs(x - y) <= z)
    {
      cout << "?";
    }
    else
    {
      cout << "+";
    }
  }
  else
  {
    if (z == 0)
    {
      cout << "0";
    }
    else

    {
      cout << "?";
    }
  }
}
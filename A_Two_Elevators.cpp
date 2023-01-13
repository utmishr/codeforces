#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    int x = abs(b - c) + abs(c - 1);
    int y = abs(a - 1);
    if (x > y)
    {
      cout << 1 << endl;
    }
    else if (x == y)
    {
      cout << 3 << endl;
    }
    else
    {
      cout << 2 << endl;
    }
  }
}
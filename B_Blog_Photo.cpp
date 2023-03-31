#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;
  cin >> a >> b;
  int c, d;
  c = log2(a);
  d = log2(b);
  if (c == d)
  {
    if (a <= b)
    {
      for (int i = b; i > 1; i--)
      {
        if (c / b <= 1.25 && c / b >= .8)
        {
          cout << c << " " << b;
          break;
        }
      }
    }
    else
    {
      for (int i = a; i > 1; i--)
      {
        if (a / d <= 1.25 && a / d >= .8)
        {
          cout << a << " " << d;
          break;
        }
      }
    }
  }
  if (c > d)
  {
  }
}
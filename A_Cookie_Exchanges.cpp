#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b, c, count = 0;
  cin >> a >> b >> c;
  if (a == b && b == c)
  {
    if (a % 2 != 0)
    {
      cout << "0";
    }

    else
      cout << -1;
    return 0;
  }
  while (true)
  {
    if (a % 2 != 0 || b % 2 != 0 || c % 2 != 0)
    {
      break;
    }
    int tempa = a;
    int tempb = b;
    int tempc = c;
    a = tempb / 2 + tempc / 2;
    b = tempa / 2 + tempc / 2;
    c = tempa / 2 + tempb / 2;
    count++;
  }
  cout << count;
}
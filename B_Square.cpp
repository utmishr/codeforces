#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    // cout << n;
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == c)
    {
      if (b + d == c)
      {
        cout << "YES" << endl;
        continue;
      }
    }
    if (a == d)
    {
      if (b + c == d)
      {
        cout << "YES" << endl;
        continue;
      }
    }
    if (b == c)
    {
      if (a + d == c)
      {
        cout << "YES" << endl;
        continue;
      }
    }
    if (b == d)
    {
      if (a + c == d)
      {
        cout << "YES" << endl;
        continue;
      }
    }

    cout << "NO" << endl;
  }
}

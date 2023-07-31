#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;
    while (a-- && (n / 2 + 10 < n))
    {
      n = n / 2 + 10;
    }
    while (b--)
    {
      n = n - 10;
    }
    if (n <= 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k, count = 0;
    cin >> n >> k;
    vector<int> a(n + 1);
    for (int i = 1; i <= n; i++)
    {
      cin >> a[i];
    }
    for (int i = 1; i <= n; i++)
    {
      if (abs(a[i] - i) % k != 0)
      {
        count++;
      }
    }
    if (count == 0)
    {
      cout << 0 << endl;
    }
    else if (count == 2)
    {
      cout << 1 << endl;
    }
    else
    {
      cout << -1 << endl;
    }
  }
}
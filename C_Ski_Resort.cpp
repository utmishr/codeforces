#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int ans = 0;
    int n, k, q;
    cin >> n >> k >> q;
    int count = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int flag = 0;
    int t;
    for (int i = 0; i < n; i++)
    {
      if (a[i] > q)
      {
        flag = 1;
      }
      if (flag == 1)
      {
        t = (k + 1) - count;
        if (t > 0)
        {
          ans += t;
        }
        flag = 0;
        continue;
      }
      count++;
    }
    t = (k + 1) - count;
    if (t > 0)
    {
      ans += t;
    }
    cout << ans << endl;
  }
}
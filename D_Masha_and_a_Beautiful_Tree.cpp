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
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    int len = 2;
    int ans = 0;
    bool flag = true;
    while (len <= n)
    {
      for (int i = 0; i < n; i++)
      {
        int count = 0;
        int mini = INT_MAX, maxa = INT_MIN;
        while (count < len)
        {
          mini = min(mini, a[i]);
          maxa = max(maxa, a[i]);
          count++, i++;
        }
        i--;
        if ((mini - 1) % len == 0 && (maxa - mini + 1) == len)
        {
          if (a[i + 1 - len] != mini)
          {
            ans++;
            int start = i + 1 - len;
            for (int j = start; j + (len / 2) <= i; j++)
              swap(a[j], a[j + len / 2]);
          }
        }
        else
        {
          flag = false;
          break;
        }
      }
      if (!flag)
        break;
      len = len * 2;
    }
    if (flag)
      cout << ans << endl;
    else
      cout << -1 << endl;
  }
}

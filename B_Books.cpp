#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, t, max = 0;
  long long flag = 1;
  cin >> n >> t;
  long long a[n], pre[n];
  cin >> a[0];
  pre[0] = a[0];
  if (n == 1)
  {
    if (a[0] < t)
      cout << 1;
    else
      cout << 0;
    return 0;
  }
  for (long long i = 1; i < n; i++)
  {
    cin >> a[i];
    if (a[i] > t)
    {
      flag++;
    }
    pre[i] = a[i] + pre[i - 1];
  }
  if (flag == n)
  {
    cout << 0;
    return 0;
  }
  long long l = 0, r = n, mid;
  for (int i = 0; i < n; i++)
  {
    l = i;
    r = n;
    while (r > l + 1)
    {
      mid = (r + l) / 2;
      if (pre[mid] - pre[i] + a[i] <= t)
      {
        l = mid;
      }
      if (pre[mid] - pre[i] + a[i] > t)
      {
        r = mid;
      }
    }
    if (l - i + 1 > max)
    {
      max = l - i + 1;
    }
    // cout << l << " ";
  }
  cout << max;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long n, m;
    cin >> n >> m;
    long long a[n];
    long long suf[n], pre[n];
    cin >> a[0];
    pre[0] = a[0];
    for (long long i = 1; i < n; i++)
    {
      cin >> a[i];
      pre[i] = a[i] + pre[i - 1];
    }
    suf[n - 1] = a[n - 1];
    for (long long i = n - 2; i >= 0; i--)
    {
      suf[i] = suf[i + 1] + a[i];
    }
    for (long long i = 0; i < m; i++)
    {
      long long sum = 0, l, r, k;
      cin >> l >> r >> k;
      if (r != n)
      {
        sum = suf[r];
      }
      if (l != 1)
      {
        sum += pre[l - 2];
      }
      sum += (r - l + 1) * k;
      // cout << sum << " ";
      if (sum % 2 == 0)
      {
        cout << "NO" << endl;
      }
      else
      {
        cout << "YES" << endl;
      }
    }
  }
}
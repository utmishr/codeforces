#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    long long n, mina = 1000000000, minb = mina;
    cin >> n;
    long long a[n], b[n], c[n], d[n];
    for (long long i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] < mina)
      {
        mina = a[i];
      }
    }
    for (long long i = 0; i < n; i++)
    {
      cin >> b[i];
      if (b[i] < minb)
      {
        minb = b[i];
      }
    }
    for (long long i = 0; i < n; i++)
    {
      c[i] = abs(mina - a[i]);
      d[i] = abs(minb - b[i]);
    }
    long long count = 0;
    for (long long i = 0; i < n; i++)
    {
      count += max(c[i], d[i]);
    }
    cout << count << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n;
    cin >> n;
    long long a[n], b[n / 2];
    for (long long i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (long long i = 0; i < n / 2; i++)
    {
      b[i] = abs(a[i] - a[n - i - 1]);
      // if (b[i] != 0)
      cout << b[i] << " ";
      // {
      //   flag
      // }
    }
    cout << "s";
    long long m = 10000000000005;
    for (long long i = 0; i < n / 2; i++)
    {
      m = min(m, b[i]);
    }
    if (m == 10000000000005)
    {
      cout << "0d" << endl;
    }
    else
      cout << m << endl;
  }
}
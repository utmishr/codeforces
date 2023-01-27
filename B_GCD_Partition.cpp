#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
  return b == 0 ? a : gcd(b, a % b);
}

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int t;
    cin >> t;
    long long a[t];
    long long sum = 0, max = -1, q = 0;
    for (int i = 0; i < t; i++)
    {
      cin >> a[i];
      sum = sum + a[i];
    }
    long long sum2 = a[0];
    for (int i = 1; i <= t - 1; i++)
    {
      q = gcd(sum2, sum - sum2);
      if (max < q)
      {
        max = q;
      }
      sum2 = sum2 + a[i];
    }
    cout << max << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int fact(int n);

int nCr(int n, int r)
{
  return fact(n) / (fact(r) * fact(n - r));
}

int fact(int n)
{
  if (n == 0)
    return 1;
  int res = 1;
  for (int i = 2; i <= n; i++)
    res = res * i;
  return res;
}

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
    n = 10 - n;
    int r = 2;
    cout << nCr(n, r) * 6 << endl;
  }
}

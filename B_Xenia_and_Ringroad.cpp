#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, m, count = 0;
  cin >> n >> m;
  long long a[m];
  for (long long i = 0; i < m; i++)
  {
    cin >> a[i];
  }
  for (long long i = 0; i < m; i++)
  {
    if (a[i] > a[i + 1])
    {
      count++;
    }
  }
  cout << count * n + a[m - 1] - 1;
}
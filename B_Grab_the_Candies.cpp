#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, eve_sum = 0, sum = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] % 2 == 0)
      {
        eve_sum += a[i];
      }
      sum += a[i];
    }
    if (eve_sum > sum - eve_sum)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
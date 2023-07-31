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
    int eve = 0, odd = 0;
    for (int i = 0; i < n; i++)
    {
      if (a[i] % 2 != i % 2 && i % 2 == 0)
      {
        eve++;
      }
      if (a[i] % 2 != i % 2 && i % 2 != 0)
      {
        odd++;
      }
    }
    if (odd == eve)
    {
      cout << odd << endl;
    }
    else
    {
      cout << -1 << endl;
    }
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m = 0, count = 0, count1 = 0;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] > m)
      {
        m = a[i];
      }
      if (a[i] == 0)
      {
        count++;
      }
      if (a[i] == 1)
      {
        count1++;
      }
    }
    if (n == 1 && count == 1)
    {
      cout << 1 << endl;
      continue;
    }
    if (count <= n - count + 1)
    {
      cout << 0 << endl;
    }
    if (count > n - count + 1)
    {
      if (m == 1)
      {
        if (count + 1 >= count1)
          cout << 2 << endl;
        else
        {
          cout << count1 - count + 2 << endl;
        }
      }
      else
        cout << 1 << endl;
    }
  }
}
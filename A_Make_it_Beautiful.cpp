#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int m = -1;
    int t;
    cin >> t;
    int a[t];
    for (int i = 0; i < t; i++)
    {
      cin >> a[i];
      if (a[i] > m)
      {
        m = a[i];
      }
    }
    sort(a, a + t, greater<int>());
    if (a[0] == a[t - 1])
    {
      cout << "NO" << endl;
      continue;
    }
    if (a[0] == a[1])
    {
      a[0] = a[t - 1];
      a[t - 1] = a[1];
    }
    cout << "YES" << endl;
    for (int i = 0; i < t; i++)
    {
      cout << a[i] << " ";
    }
    cout << endl;
  }
}
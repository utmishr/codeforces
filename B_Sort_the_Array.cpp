#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, i, j, flag, a[100100], p, q, s, e;
  cin >> n;
  flag = 0;
  for (i = 0; i < n; i++)
    cin >> a[i];
  for (i = 1; i < n; i++)
  {
    if (flag == 1 && a[i] < a[i - 1])
    {
      cout << "no\n";
      return 0;
    }
    if (flag == 0 && a[i] <= a[i - 1])
    {
      flag = 1;
      s = i - 1;
      while (i < n && a[i] <= a[i - 1])
      {
        i++;
      }
      e = i - 1;
      for (p = s, q = e; p < q; p++, q--)
        swap(a[p], a[q]);
      i--;
    }
  }
  if (flag == 0)
    cout << "yes\n"
         << 1 << ' ' << 1 << endl;
  else
  {
    for (i = 1; i < n; i++)
    {
      if (a[i] < a[i - 1])
      {
        cout << "no\n";
        return 0;
      }
    }
    cout << "yes\n"
         << s + 1 << ' ' << e + 1 << endl;
  }
}
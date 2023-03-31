#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long n, m, flag = 0;
  cin >> n >> m;
  long long a[m];
  for (long long i = 0; i < m; i++)
  {
    cin >> a[i];
    if (a[i] == 1 || a[i] == n)
    {
      flag = 1;
    }
  }
  if (flag == 1)
  {
    cout << "NO";
    return 0;
  }
  sort(a, a + m);
  for (int i = 2; i < m; i++)
  {
    if (a[i] - a[i - 1] == 1 && a[i - 1] - a[i - 2] == 1)
    {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  // for (long long i = 1; i < n + 1;)
  // {
  //   if (i == n)
  //   {
  //     break;
  //   }
  //   if (a[i + 1] == 0)
  //   {
  //     i++;
  //   }
  //   else if (a[i + 1] == 1 && a[i + 2] == 0)
  //   {
  //     i = i + 2;
  //   }
  //   else if (a[i + 1] == 1 && a[i + 2] == 1 && a[i + 3] == 0)
  //   {
  //     i = i + 3;
  //   }
  //   else
  //   {
  //     // cout << i;
  //     cout << "NO";
  //     return 0;
  //   }
  // }
  // cout << "YES";
}
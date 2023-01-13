#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    bool flag = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= m; j++)
      {
        if ((i + 2 > n || j + 1 > m) && (i + 2 > n || j - 1 > m) && (i - 2 < 1 || j - 1 < 1) && (i - 2 < 1 || j + 1 < 1) && (i + 1 > n || j + 2 > m) && (i + 1 > n || j - 2 < 1) && (i - 1 < 1 || j - 2 < 1) && (i - 1 < 1 || j + 2 > m))
        {
          flag = 1;
          cout << i << " " << j << endl;
          break;
        }
      }
      if (flag == 1)
      {
        break;
      }
    }
    if (flag != 1)
    {
      cout << n << " " << m << endl;
    }
  }
}

#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  int a[n + 1] = {0};
  for (int i = 0; i < m; i++)
  {
    int e, b;
    cin >> e >> b;
    a[e] = 1;
    a[b] = 1;
  }
  if (n == 1)
  {
    cout << 0;
    return 0;
  }
  cout << n - 1 << endl;

  for (int i = 1; i <= n; i++)
  {
    if (a[i] == 0)
    {
      m = i;
      break;
    }
  }
  for (int j = 1; j <= n; j++)
  {
    if (j != m)
    {
      cout << j << " " << m << endl;
    }
  }
}

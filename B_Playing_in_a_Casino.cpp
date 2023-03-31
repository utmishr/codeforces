#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        cin >> a[i][j];
      }
    }
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
      for (int j = 0; j < m; j++)
      {
        sum += abs(a[i + 1][j] - a[i][j]);
      }
    }
    cout << sum << endl;
  }
}
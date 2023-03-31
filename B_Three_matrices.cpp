#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  float w[n][n], a[n][n], b[n][n];
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cin >> w[i][j];
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      a[i][j] = (w[i][j] + w[j][i]) / 2;
      cout << setprecision(6) << a[i][j] << " ";
    }
    cout << endl;
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      b[i][j] = w[i][j] - a[i][j];
      cout << setprecision(6) << b[i][j] << " ";
    }
    cout << endl;
  }
}
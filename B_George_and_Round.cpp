#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, count = 0;
  cin >> n >> m;
  int a[n] = {0}, b[m] = {0}, vis[n] = {0};
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < m; i++)
  {
    int t;
    cin >> t;
    b[t] = 1;
  }
  for (int i = 0; i < n; i++)
  {
    if (b[a[i]] == 1 && vis[a[i]] == 0)
    {
      vis[a[i]] = 1;
      count++;
    }
  }
  cout << abs(count - n);
}
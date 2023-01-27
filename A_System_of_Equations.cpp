#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int n, m, count = 0;
  cin >> n >> m;
  vector<int> x, y;
  int a = sqrt(n);
  for (int i = 0; i < a + 1; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (i * i + j == n)
      {
        x.push_back(i);
        y.push_back(j);
      }
    }
  }
  a = sqrt(m);
  for (int i = 0; i < x.size(); i++)
  {
    if (x[i] + y[i] * y[i] == m)
    {
      count++;
    }
  }
  cout << count;
}
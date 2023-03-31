#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m, d;
  cin >> n >> m >> d;
  vector<int> v;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      int x;
      cin >> x;
      v.push_back(x);
    }
  }
  sort(v.begin(), v.end());
  for (int i = 1; i < v.size(); i++)
  {
    if (((v[i] - v[i - 1]) % d) != 0)
    {
      cout << "-1";
      return 0;
    }
  }
  long long ans = 0;
  for (int i = 0; i < v.size(); i++)
  {
    ans += abs(v[i] - v[v.size() / 2]);
  }
  cout << ans / d;
  return 0;
}
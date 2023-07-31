#include <bits/stdc++.h>
using namespace std;

int main()
{
  int k, n;
  cin >> k >> n;
  vector<int> v(n);
  for (auto &&i : v)
    scanf("%d", &i);
  int ans = v.back() - v.front();
  for (int i = 0; i + 1 < n; ++i)
  {
    ans = min(ans, k - (v[i + 1] - v[i]));
  }
  cout << ans << "\n";
  return 0;
}

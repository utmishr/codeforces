#include <bits/stdc++.h>
using namespace std;

int res(int a)
{
  string s = to_string(a);
  return *max_element(s.begin(), s.end()) - *min_element(s.begin(), s.end());
}
void solve()
{
  int n = 1, m = 0;
  int a, b;
  cin >> a >> b;
  int ans = 0;
  int num = a;
  for (int i = a; i <= b; i++)
  {
    int v = res(i);
    if (v == 9)
    {
      cout << i << "\n";
      return;
    }
    if (v > ans)
    {
      ans = v;
      num = i;
    }
  }
  cout << num << "\n";
}

int main()
{
  int T = 1;
  cin >> T;
  while (T--)
  {
    solve();
  }
  return 0;
}

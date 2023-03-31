#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t = -1;
  vector<int> v;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  if (is_sorted(a, a + n))
  {
    cout << 0;
    return 0;
  }
  for (int i = 1; i < n; i++)
  {
    if (a[i] < a[i - 1] && t == -1)
    {
      t = i;
    }
    if (t != -1)
    {
      v.push_back(a[i]);
    }
  }
  for (int i = 0; i < t; i++)
  {
    v.push_back(a[i]);
  }
  // for(int )
  if (is_sorted(v.begin(), v.end()))
  {
    cout << n - t;
  }
  else
  {
    cout << -1;
  }
}
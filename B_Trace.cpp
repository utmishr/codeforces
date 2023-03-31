#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  sort(a, a + n, greater<int>());
  float ans = 0;
  for (int i = 0; i < n; i++)
  {
    float t;
    if (i % 2 != 0)
    {
      t = -a[i] * a[i];
    }
    else
    {
      t = a[i] * a[i];
    }
    ans = ans + t;
  }
  cout << 3.14159265 * ans;
}
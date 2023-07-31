#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    int r = n / k;
    int l = n - r * k;
    int ans = r * k;
    ans += min(l, k / 2);
    cout << ans << endl;
  }
}
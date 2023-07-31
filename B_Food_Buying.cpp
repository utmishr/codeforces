#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int ans = 0;
    int n;
    cin >> n;
    while (true)
    {
      if (n < 10)
      {
        break;
      }
      int l = n % 10;
      n = n - l;
      int r = n / 10;
      n = l + r;
      ans = ans + r * 10;
    }
    ans += n;
    cout << ans << endl;
  }
}
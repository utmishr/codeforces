#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, ans = 0;
    cin >> n;
    long long f = sqrt(n);
    if (f * f == n)
    {
      ans = f - 1;
    }
    else
    {
      ans = f;
    }
    cout << ans << endl;
  }
}
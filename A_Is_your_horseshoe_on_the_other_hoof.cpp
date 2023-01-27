#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  ll a[4], count = 1;
  cin >> a[0] >> a[1] >> a[2] >> a[3];
  sort(a, a + 4);
  for (ll i = 1; i < 4; i++)
  {
    if (a[i] == a[i - 1])
    {
      count++;
    }
  }
  if (count == 0)
  {
    cout << 0;
  }
  else
    cout << count - 1 << endl;
}
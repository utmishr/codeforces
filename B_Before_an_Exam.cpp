#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n, s = 0, s1 = 0, s2 = 0;
  ll mn[5000] = {0}, mx[5000] = {0};
  ll x[5000] = {0};
  cin >> n >> s;
  for (int i = 0; i < n; i++)
  {
    cin >> mn[i] >> mx[i];
    s1 += mn[i];
    s2 += mx[i];
    x[i] = mn[i];
  }
  if (s1 <= s && s <= s2)
  {
    cout << "YES\n";
    while (s1 < s)
    {
      for (int i = 0; i < n; i++)
      {
        if (x[i] < mx[i])
        {
          x[i]++;
          break;
        }
      }
      s1++;
    }
    for (int i = 0; i < n; i++)
    {
      cout << x[i] << " ";
    }
  }
  else
  {
    cout << "NO";
  }
}
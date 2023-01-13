#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
  long long testCase;
  cin >> testCase;
  while (testCase--)
  {
    ll n;
    cin >> n;
    vector<pair<int, int>> v(n);
    ll zero = 0, one = 0;
    for (ll i = 0; i < n; i++)
    {
      ll temp;
      cin >> temp;
      if (temp == 0)
        zero++;
      else
        one++;
      v[i].first = temp;
    }
    vector<ll> a(zero), b(one);
    int y = 0, z = 0;

    for (ll i = 0; i < n; i++)
    {
      ll temp;
      cin >> temp;
      v[i].second = temp;
      if (v[i].first == 0)
      {
        a[y] = v[i].second;
        y++;
      }
      else
      {
        b[z] = v[i].second;
        z++;
      }
    }

    sort(a.begin(), a.end(), greater<ll>());
    sort(b.begin(), b.end(), greater<ll>());
    ll sum = 0;
    for (auto x : a)
    {
      sum += x;
    }
    for (auto x : b)
    {
      sum += x;
    }
    if (zero == one)
    {
      sum *= 2;
      sum -= min(a[zero - 1], b[one - 1]);

      cout << sum << endl;
    }
    else
    {
      ll mini = min(zero, one);
      for (ll i = 0; i < mini; i++)
      {
        sum += a[i] + b[i];
      }
      cout << sum << endl;
    }
  }
  return 0;
}
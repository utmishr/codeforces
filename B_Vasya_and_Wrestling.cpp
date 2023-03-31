#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
  ll n, flag = 1, asum = 0, bsum = 0;
  cin >> n;
  vector<ll> a, b;
  for (int i = 0; i < n; i++)
  {
    ll t;
    cin >> t;
    if (t < 0)
    {
      b.push_back(-t);
      flag = 1;
      bsum += -t;
    }
    else
    {
      a.push_back(t);
      flag = 0;
      asum += t;
    }
  }
  if (asum > bsum || (asum == bsum && (a > b || (a == b && flag == 0))))
  {
    cout << "first";
  }
  else
  {
    cout << "second";
  }
}
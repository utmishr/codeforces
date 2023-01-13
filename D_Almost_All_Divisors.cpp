#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  while (n--)
  {
    int t;
    cin >> t;
    vector<long long> a;
    vector<long long> v;
    for (int i = 0; i < t; i++)
    {
      int x;
      cin >> x;
      a.push_back(x);
    }
    sort(a.begin(), a.end());
    long long qw = a[0] * a.back();
    for (int i = 2; i <= sqrt(qw); i++)
    {
      if (qw % i == 0)
      {
        if (qw / i == i)
          v.push_back(i);
        else
        {
          v.push_back(qw / i);
          v.push_back(i);
        }
      }
    }
    sort(v.begin(), v.end());
    if (a == v)
    {
      cout << v[0] * v.back() << endl;
    }
    else
    {
      cout << -1 << endl;
    }
  }
}
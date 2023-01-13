#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    long long n, k, j = 1;
    long long sum = 0;
    cin >> n >> k;
    map<int, int> m;
    map<int, int>::iterator it;
    for (int i = 1; i <= n; i++)
    {
      int x;
      cin >> x;
      if (m[j] < x)
        m[j] = x;

      j++;
      if (i % k == 0)
        j = 1;
    }
    for (it = m.begin(); it != m.end(); it++)
    {
      sum = sum + it->second;
    }
    cout << sum << endl;
  }
}
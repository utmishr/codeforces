#include <bits/stdc++.h>
using namespace std;

int main()
{
  long long t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
      cin >> v[i];
    }
    int sum = 0;
    for (auto x : v)
    {
      sum = sum + x;
    }
    int temp = 0, mi = n, count = 0;
    for (int i = 0; i < n; i++)
    {
      temp = temp + v[i];
      count++;
      int tmax = 0;
      int tsum = 0;
      int tcount = 0;
      if (sum % temp == 0)
      {
        tmax = count;
        for (int j = i + 1; j < n; j++)
        {
          tsum = tsum + v[j];
          tcount++;
          if (tsum == temp)
          {
            tmax = max(tmax, tcount);
            tsum = 0;
            tcount = 0;
          }
        }
        if (tsum == 0)
        {
          mi = min(mi, tmax);
        }
      }
    }
    cout << mi << endl;
  }
}
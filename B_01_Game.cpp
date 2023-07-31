#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    int one = 0;
    string a;
    cin >> a;
    n = a.length();
    for (int i = 0; i < n; i++)
    {
      // cin >> a[i];
      if (a[i] == '1')
      {
        one++;
      }
    }
    // cout << min(one, n - one);
    if (min(one, n - one) % 2 != 0)
    {
      cout << "DA" << endl;
    }
    else
    {
      cout << "NET" << endl;
    }
  }
  return 0;
}
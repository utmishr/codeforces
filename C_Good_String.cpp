#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n, i;
  cin >> n;
  string s, res;
  cin >> s;
  for (i = 0; i < n - 1;)
  {
    if (s[i] != s[i + 1])
    {
      res = res + s[i] + s[i + 1];
      i = i + 2;
    }
    else
      i++;
  }
  cout << n - res.length() << endl
       << res;
}
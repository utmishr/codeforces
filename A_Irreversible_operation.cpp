#include <bits/stdc++.h>
using namespace std;
int main()
{
  string s;
  cin >> s;
  long long ans = 0, count = 0;
  for (int i = s.length() - 1; i >= 0; i--)
  {
    if (s[i] == 'W')
    {
      count++;
    }
    else
    {
      ans += count;
    }
  }
  cout << ans;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  vector<vector<int>> v(n, vector<int>(26, 0));
  for (int i = 0; i < n; i++)
  {
    string s;
    cin >> s;
    for (int j = 0; j < s.length(); j++)
    {
      int t = s[j] - 97;
      v[i][t]++;
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 26; j++)
    {
      if (v[i][j] % 2 == 0)
      {
        v[i][j] = 0;
      }
      else
      {
        v[i][j] = 1;
      }
    }
  }
  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
    }
  }
}
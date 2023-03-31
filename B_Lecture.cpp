#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;
  map<string, string> s;
  string a, b;
  for (int i = 0; i < m; i++)
  {
    cin >> a >> b;
    if (a.length() > b.length())
    {
      s[a] = b;
    }
    else
    {
      s[a] = a;
    }
  }
  for (int i = 0; i < n; i++)
  {
    string t;
    cin >> t;
    cout << s[t] << " ";
  }
}
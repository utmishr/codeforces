#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  string s;
  cin >> s;
  ll a[101], count = 0;
  map<char, int> m;
  map<char, int>::iterator it;
  for (int i = 0; i < s.length(); i++)
  {
    m[s[i]]++;
  }
  it = m.begin();
  while (it != m.end())
  {
    if (it->second > 0)
    {
      count++;
    }
    ++it;
  }
  if (count % 2 != 0)
  {
    cout << "IGNORE HIM!";
  }
  else
  {
    cout << "CHAT WITH HER!";
  }
}
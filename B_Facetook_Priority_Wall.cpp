#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)n; i++)
#define fr first
#define sc second
#define P pair<int, int>
#define m_p make_pair
#define pb push_back
typedef long long ll;
map<string, int> mp;
int main()
{
  string name;
  cin >> name;
  int n;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    string x, y, a, b, d;
    cin >> x >> a;
    if (a[0] != 'l')
      cin >> b;
    cin >> y >> d;
    y = y.substr(0, y.size() - 2);
    if (x != name && y != name)
    {
      mp[x] += 0;
      mp[y] += 0;
      continue;
    }
    if (y == name)
      swap(x, y);
    if (a[0] == 'p')
      mp[y] += 15;
    if (a[0] == 'c')
      mp[y] += 10;
    if (a[0] == 'l')
      mp[y] += 5;
  }
  vector<pair<int, string>> v;
  for (map<string, int>::iterator it = mp.begin(); it != mp.end(); it++)
  {
    string s = it->fr;
    int p = it->sc;
    v.pb(m_p(-p, s));
  }
  sort(v.begin(), v.end());
  for (int i = 0; i < v.size(); i++)
    cout << v[i].sc << endl;
  return 0;
}
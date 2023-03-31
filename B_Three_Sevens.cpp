#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int count[50005] = {0}, vis[50005] = {0};
    for (int i = 1; i <= n; i++)
    {
      int m;
      cin >> m;
      for (int j = 1; j <= m; j++)
      {
        int t;
        cin >> t;
        vis[t] = i;
        count[t]++;
      }
    }
    vector<pair<int, int>> v;
    multimap<int, int> m;
    for (int i = 1; i <= 50001; i++)
    {
      if (count[i] > 0)
      {
        m.insert(pair<int, int>(vis[i], i));
      }
    }
    // cout << m.size() << endl;
    // for (auto i : m)
    // {
    //   cout << i.first << " " << i.second << endl;
    // }
    // cout << endl;
    int flag = 0;
    for (int i = 1; i <= n; i++)
    {
      if (m.find(i) != m.end())
      {
        continue;
      }
      else
      {
        cout << "-1" << endl;
        flag = 1;
        break;
      }
    }
    if (flag == 1)
    {
      continue;
    }
    multimap<int, int>::iterator it;
    for (int i = 1; i <= n; i++)
    {
      it = m.find(i);
      cout << it->second << " ";
    }
    cout << endl;

    // sort(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //   cout << v[i].first << " "
    //        << v[i].second << endl;
    // }
    // cout << "fh" << endl;
    // // for (int i = 0; i < n; i++)
    // // {
    // //   cout << v[i].second << " ";
    // // }
    // // cout << endl;
  }
}

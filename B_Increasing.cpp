#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int flag = 0;
    int n;
    cin >> n;
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      m[x]++;
    }
    auto it = m.cbegin();

    while (it != m.cend())
    {
      if (it->second > 1)
      {
        flag = 1;
        break;
      }
      it++;
    }
    if (flag == 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
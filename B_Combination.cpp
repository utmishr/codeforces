#include <bits/stdc++.h>
using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
  return (a.second > b.second);
}

int main()
{
  int n, flag = 0;
  cin >> n;
  vector<pair<int, int>> v, v2;
  vector<pair<int, int>>::iterator it;

  for (int i = 0; i < n; i++)
  {
    int a, b;
    cin >> a >> b;
    if (b == 0)
    {
      v2.push_back(make_pair(a, b));
    }
    v.push_back(make_pair(a, b));
  }
  sort(v.begin(), v.end(), sortbysec);
  int sum = 0, counter = 1;
  for (int i = 0; i < n; i++)
  {
    if (counter == 0)
    {
      cout << sum;
      return 0;
    }
    if (v[i].second > 0)
    {
      sum += v[i].first;
      counter += v[i].second - 1;
    }
    else
    {
      flag = i;
      break;
    }
  }

  // int t = min(counter, n - flag);
  // cout << sum << endl;
  sort(v2.begin(), v2.end(), greater<pair<int, int>>());
  for (auto i : v2)
  {
    if (counter == 0)
    {
      cout << sum;
      return 0;
    }
    sum += i.first;
    counter--;
  }
  cout << sum;
}
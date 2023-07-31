#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, m;
    cin >> n >> m;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        char a;
        cin >> a;
        if (a == 'R' && j == m - 1)
        {
          count++;
        }
        if (a == 'D' && i == n - 1)
        {
          count++;
        }
      }
    }
    cout << count << endl;
  }
}
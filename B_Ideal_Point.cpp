#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n, k;
    cin >> n >> k;
    // map<int, int> a,b;
    int counta = 0, countb = 0;
    for (int i = 0; i < n; i++)
    {
      int a, b;
      cin >> a >> b;
      if (a == k)
      {
        counta++;
      }
      if (b == k)
      {
        countb++;
      }
    }
    if (counta >= 1 && countb >= 1)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
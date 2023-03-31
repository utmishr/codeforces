#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int counta = 0, countb = 0;
    string a, b;
    int n, m, couta = 0;
    cin >> n >> m;
    cin >> a >> b;
    reverse(b.begin(), b.end());
    a = a + b;
    // cout << a;
    for (int i = 1; i < a.length(); i++)
    {
      if (a[i] == a[i - 1])
      {
        couta++;
      }
    }
    if (couta == 1 || couta == 0)
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
    // for (int i = 1; i < n; i++)
    // {
    //   if (b[i] == b[i - 1])
    //   {
    //     countb++;
    //   }
    // }
    // if (counta == 0 && countb == 0)
    // {
    //   cout << "YES" << endl;
    // }
    // else if (a[n - 1] == b[m - 1])
    // {
    //   cout << "NO" << endl;
    // }
    // else if (counta == 0 && countb == 1)
    // {
    //   cout << "YES" << endl;
    // }
    // else if (countb == 0 && counta == 1)
    // {
    //   cout << "YES" << endl;
    // }
    // else
    // {
    //   cout << "NO" << endl;
    // }
  }
}
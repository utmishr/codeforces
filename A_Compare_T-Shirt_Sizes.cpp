#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string a, b;
    cin >> a >> b;
    int x = a.length();
    int y = b.length();

    if (a[x - 1] > b[y - 1])
    {
      cout << "<" << endl;
    }
    if (a[x - 1] < b[y - 1])
    {
      cout << ">" << endl;
    }
    if (a[x - 1] == b[y - 1] && a[x - 1] == 'S')
    {
      if (x > y)
      {
        cout << "<" << endl;
      }
      if (x < y)
      {
        cout << ">" << endl;
      }
      if (x == y)
      {
        cout << "=" << endl;
      }
    }
    if (a[x - 1] == b[y - 1] && a[x - 1] == 'L')
    {
      if (x > y)
      {
        cout << ">" << endl;
      }
      if (x < y)
      {
        cout << "<" << endl;
      }
      if (x == y)
      {
        cout << "=" << endl;
      }
    }
    if (a[x - 1] == b[y - 1] && a[x - 1] == 'M')
    {
      cout << "=" << endl;
    }
  }
}

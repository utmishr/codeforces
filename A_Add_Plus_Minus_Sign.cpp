#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  for (int j = 0; j < n; j++)
  {
    int t;
    cin >> t;
    string s;
    cin >> s;
    int c = 0;
    if (s[0] == '1')
    {
      c++;
    }
    for (int i = 1; i < t; i++)
    {
      if (s[i] == '0')
      {
        cout << "+";
      }
      if (s[i] == '1')
      {
        c++;
        if (c % 2 == 0)
        {
          cout << "-";
        }
        if (c % 2 == 1)
        {
          cout << "+";
        }
      }
    }
    cout << endl;
  }
}
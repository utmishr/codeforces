#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    char a[50];
    int n, m;
    int l;
    cin >> l;
    string s, b = "";
    cin >> s;

    for (int i = l - 1; i >= 0; i--)
    {
      if (s[i] == '0')
      {
        m = (s[i - 2] - 48) * 10 + s[i - 1] - 48;
        i = i - 2;
      }
      else
      {
        m = s[i] - 48;
      }
      b = b + char(m + 97 - 1);
    }
    reverse(b.begin(), b.end());
    cout << b << endl;
  }
}
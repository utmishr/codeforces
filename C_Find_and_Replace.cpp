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
    string s;
    cin >> s;
    // for (int i = 1; i < n; i++)
    // {
    //   if (s[i] == s[i - 1])
    //   {
    //     flag = 1;
    //   }
    //   if (s[i])
    // }
    // if (flag == 1)
    // {
    //   cout << "NO";
    // }

    char flag = 'X';
    int f = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i - 1] == 'X' && i != 0)
      {
        flag = 'Y';
      }
      else
      {
        flag = 'X';
      }
      if (s[i] == 'X' || s[i] == 'Y')
      {
        continue;
      }
      for (int j = i + 1; j < n; j++)
      {
        if (s[j] == 'X' || s[j] == 'Y')
        {
          continue;
        }
        if (s[i] == s[j])
        {
          s[j] = flag;
        }
      }
      s[i] = flag;
    }
    for (int i = 1; i < n; i++)
    {
      if (s[i] == s[i - 1])
      {
        f = 1;
        ;
        break;
      }
    }
    if (f == 1)
    {
      cout << "NO" << endl;
    }
    else
    {
      cout << "YES" << endl;
    }
  }
}
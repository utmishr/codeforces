#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int count = 0;
    int n;
    char a;
    cin >> n;
    cin >> a;
    string s;
    cin >> s;
    int max = -1;
    int ind;
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'g')
      {
        break;
      }
      count++;
    }
    string r = s.substr(0, count + 1);
    s = s + r;
    for (int i = 0; i < s.length(); i++)
    {
      if (s[i] == a && flag == 0)
      {
        ind = 0;
        flag = 1;
      }
      if (s[i] == 'g' && flag == 1)
      {
        if (max < ind)
        {
          max = ind;
        }
        flag = 0;
      }
      else
      {
        ind++;
      }
    }
    cout << max << endl;
  }
}
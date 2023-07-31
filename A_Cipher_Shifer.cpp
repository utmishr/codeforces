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
    string ans = "";
    char c = s[0];
    // string temp;
    // temp.push_back(c);
    for (int i = 1; i < n; i++)
    {
      if (s[i] == c)
      {
        ans.push_back(c);
        if (i < n)
        {
          c = s[i + 1];
        }
        i++;
      }
    }
    cout << ans << endl;
  }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n, t;
  cin >> n >> t;
  string s;
  cin >> s;
  for (int j = 0; j < t; j++)
  {
    for (int i = 1; i < n; i++)
    {
      if (s[i - 1] == 'B' && s[i] == 'G')
      {
        char temp = s[i];
        s[i] = s[i - 1];
        s[i - 1] = temp;
        i++;
      }
    }
  }
  cout << s;
}

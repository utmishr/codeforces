#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    string s;
    int count = 0;
    char a;

    cin >> s;
    if (s[0] > s[s.length() - 1])
    {
      multimap<char, int, greater<int>> m;
      for (int i = 0; i < s.length(); i++)
      {
        if (s[i] <= s[0] && s[s.length() - 1] <= s[i])
        {
          a = s[i];
          m.insert(pair<char, int>(a, i + 1));
          count++;
        }
      }
      cout << s[0] - s[s.length() - 1] << " " << count << endl;
      for (auto it : m)
      {
        cout << it.second << " ";
      }
      cout << endl;
    }
    if (s[0] < s[s.length() - 1])
    {
      multimap<char, int> m;
      for (int i = 0; i < s.length(); i++)
      {
        if (s[i] >= s[0] && s[s.length() - 1] >= s[i])
        {
          a = s[i];
          m.insert(pair<char, int>(a, i + 1));
          count++;
        }
      }
      cout << s[s.length() - 1] - s[0] << " " << count << endl;
      for (auto it : m)
      {
        cout << it.second << " ";
      }
      cout << endl;
    }
    if (s[0] == s[s.length() - 1])
    {
      multimap<char, int> m;
      for (int i = 0; i < s.length(); i++)
      {
        if (s[i] == s[0])
        {
          a = s[i];
          m.insert(pair<char, int>(a, i + 1));
          count++;
        }
      }
      cout << s[s.length() - 1] - s[0] << " " << count << endl;
      for (auto it : m)
      {
        cout << it.second << " ";
      }
      cout << endl;
    }
  }
}
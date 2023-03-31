#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    map<char, int> M;
    map<char, int>::iterator itr;
    string s;
    cin >> s;
    for (long i = 0; i < s.length(); i++)
      M[s[i]]++;
    int max = 0;
    for (itr = M.begin(); itr != M.end(); itr++)
    {
      if (max < itr->second)
      {
        max = itr->second;
      }
    }
    if (max == 3)
    {
      cout << 6 << endl;
    }
    else if (max == 4)
    {
      cout << -1 << endl;
    }
    else
    {
      cout << 4 << endl;
    }
  }
}
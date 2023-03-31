#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s, t;
  cin >> s >> t;
  int flag0 = 0;
  int lt = t.length();
  int ls = s.length();
  int j = 0;
  for (int i = 0; i < ls; i++)
  {
    if (s[i] == t[j])
    {
      j++;
    }
  }
  if (j == lt)
  {
    cout << "automaton";
    return 0;
  }
  map<char, int> ms, mt;
  for (int i = 0; i < lt; i++)
  {
    mt[t[i]]++;
  }
  for (int i = 0; i < ls; i++)
  {
    ms[s[i]]++;
  }
  int flag = 0;
  for (auto i : mt)
  {
    if (ms[i.first] != i.second)
    {
      // cout << "hello" << i.first << endl;
      flag = 1;
    }
    if (ms[i.first] < i.second)
    {
      // cout << "hello" << i.first << endl;
      flag0 = 1;
    }
  }
  // cout << flag;
  // for (auto i : ms)
  //   cout << i.first << " " << i.second << endl;
  // cout << "t" << endl;
  // for (auto i : mt)
  //   cout << i.first << " " << i.second << endl;

  if (flag == 0 && ls == lt)
  {
    cout << "array";
  }
  else if (flag0 == 0 && ls != lt)
  {
    cout << "both";
  }
  else
  {
    cout << "need tree";
  }
}

// hxsvvydmzhxrswvhkvrbjrfqkazbkjabnrdghposgyfeslzumaovfkallszzumztftgpcilwfrzpvhhbgdzdvnmseqywlzmhhoxh
// dbelhtzgkssyfrqgzuurdjhwvmdbhylhmvphjgxpzhxbb
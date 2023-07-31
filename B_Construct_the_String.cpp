#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    int a, b;
    cin >> n >> a >> b;
    string s = "qwertyuiopasdfghjklzxcvbnm";
    string m = "";
    for (int i = 0; i < b; i++)
    {
      m += s[i];
    }
    for (int i = 0; i < a - b; i++)
    {
      m += m[i];
    }
    for (int i = 0; i < n - a; i++)
    {
      m.push_back(m[i]);
    }
    cout << m << endl;
  }
}
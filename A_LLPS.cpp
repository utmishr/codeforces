#include <bits/stdc++.h>
using namespace std;
using ll = long long;

string ma = "a";

bool palin(string S)
{
  string P = S;
  reverse(P.begin(), P.end());
  if (S == P)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void fun(string a, string b, int n)
{
  if (n == 0)
  {
    if (a.length() != 0 && palin(a))
    {
      if (ma < a)
      {
        ma = a;
      }
    }
    return;
  }
  fun(a, b, n - 1);
  a = a + b[n - 1];
  fun(a, b, n - 1);
}

int main()
{
  string a, b;
  cin >> b;
  fun(a, b, b.length());
  cout << ma;
}
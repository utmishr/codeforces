#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  string s = "abcd";
  int t = n / 4;
  int r = n % 4;
  for (int i = 0; i < t; i++)
  {
    cout << "abcd";
  }
  for (int j = 0; j < r; j++)
  {
    cout << s[j];
  }
}
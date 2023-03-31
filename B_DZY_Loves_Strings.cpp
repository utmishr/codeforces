#include <bits/stdc++.h>
using namespace std;

int main()
{
  string s;
  long long n;
  cin >> s >> n;
  long long a[27];
  long long max = 0;
  a[0] = 0;
  for (int i = 1; i <= 26; i++)
  {
    cin >> a[i];
    if (a[i] > max)
    {
      max = a[i];
    }
  }
  // for (int i = 1; i <= 26; i++)
  // {
  //   cout << a[i] << " ";
  // }
  long long count = 0;
  for (long long i = 0; i < s.length(); i++)
  {
    char character = s[i];
    int t = int(character) - 96;
    // cout << a[(int(character) - 96)] << endl;
    count = count + (a[t] * (i + 1));
    // cout << count << endl;
    // cout << i << " ";
  }
  for (int i = s.length() + 1; i <= s.length() + n; i++)
  {
    count = count + max * i;
    // cout << i << endl;
  }
  cout << count;
}
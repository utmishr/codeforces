#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;
  int a[n], b[n];
  string s;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i] >> b[i];
  }
  long long suma = 0, sumb = 0;
  for (int i = 0; i < n; i++)
  {
    if (abs(suma + a[i] - sumb) <= 500)
    {
      suma += a[i];
      s.push_back('A');
    }
    else if (abs(sumb + b[i] - suma) <= 500)
    {
      sumb += b[i];
      s.push_back('G');
    }
    else
    {
      cout << "NO";
      return 0;
    }
  }
  cout << s;
}
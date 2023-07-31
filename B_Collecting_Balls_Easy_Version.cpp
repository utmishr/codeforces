#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  int n;
  int sum = 0;
  cin >> n;
  int a[t];
  for (int i = 0; i < t; i++)
  {
    cin >> a[i];
    if (abs(n - a[i]) >= abs(a[i]))
    {
      sum += 2 * a[i];
    }
    else
    {
      sum += 2 * abs(n - a[i]);
    }
  }
  cout << sum;
}

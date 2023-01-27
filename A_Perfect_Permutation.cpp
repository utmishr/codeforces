#include <bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
  int n;
  cin >> n;
  if (n % 2 == 1)
  {
    cout << -1;
    exit(0);
  }
  int a[n];
  for (int i = 0; i < n; i++)
  {
    a[i] = i + 1;
  }
  for (int i = 0; i < n - 1; i++)
  {
    int x = a[i];
    int y = a[i + 1];
    a[i] = y;
    a[i + 1] = x;
    i++;
  }
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << " ";
  }
}
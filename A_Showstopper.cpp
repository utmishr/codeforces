#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
      if (a[i] <= b[n - 1] && b[i] <= a[n - 1])
      {
        int temp = a[i];
        a[i] = b[i];
        b[i] = temp;
      }
    }
    int max = 0, max2 = 0;
    for (int i = 0; i < n; i++)
    {
      if (max <= a[i])
      {
        max = a[i];
      }
    }
    for (int i = 0; i < n; i++)
    {
      if (max2 <= b[i])
      {
        max2 = b[i];
      }
    }
    if (max2 == b[n - 1] && max == a[n - 1])
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
}
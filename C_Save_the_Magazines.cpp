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
    int a[n][2];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i][0];
    }
    for (int i = 0; i < n; i++)
    {
      cin >> a[i][1];
    }
    for (int i = 1; i < n; i++)
    {
      if (a[i - 1][1] > a[i][1] && a[i - 1][0] == 0)
      {
        int temp = a[i - 1][0];
        a[i - 1][0] = a[i][0];
        a[i][0] = temp;
      }
      if (a[i - 1][1] < a[i][1])
    }
  }
}
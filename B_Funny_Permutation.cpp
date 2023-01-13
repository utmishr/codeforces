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
    if (n % 2 == 0)
    {
      for (int i = n; i > 0; i--)
      {
        cout << i << " ";
      }
      cout << endl;
    }
    else
    {
      if (n == 3)
      {
        cout << "-1";
      }
      else
      {
        for (int i = n; i > n - (n / 2); i--)
          cout << i << " ";
        for (int i = 1; i <= n - (n / 2); i++)
          cout << i << " ";
      }
      cout << endl;
    }
  }
}
#include <iostream>
using namespace std;

int main()
{

  int t;
  cin >> t;
  while (t--)
  {
    int count = 0;
    int a1 = 0, b1 = 0;
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      if (a[i] == 1)
      {
        a1++;
      }
    }
    for (int i = 0; i < n; i++)
    {
      cin >> b[i];
      if (b[i] == 1)
      {
        b1++;
      }
    }
    for (int i = 0; i < n; i++)
    {
      if (a[i] == b[i])
      {
        count++;
      }
    }
    if (a1 == b1)
    {
      if (count == n)
        cout << 0 << endl;
      else
        cout << 1 << endl;
    }
    else
    {
      if (abs(b1 - a1) == n - count)
      {
        cout << abs(b1 - a1) << endl;
      }
      else
      {
        cout << abs(b1 - a1) + 1 << endl;
      }
    }
  }
}
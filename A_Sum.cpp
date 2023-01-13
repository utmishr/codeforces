#include <bits/stdc++.h>
using namespace std;

int main()
{
  int t;
  cin >> t;
  while (t--)
  {
    int a[3];
    cin >> a[0];
    cin >> a[1];
    cin >> a[2];
    sort(a, a + 3);
    if (a[0] + a[1] == a[2])
    {
      cout << "YES" << endl;
    }
    else
    {
      cout << "NO" << endl;
    }
  }
}
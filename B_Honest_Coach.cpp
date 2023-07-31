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
    int a[n];
    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }
    sort(a, a + n);
    int mina = 10000000;
    for (int i = 0; i < n - 1; i++)
    {
      if ((a[i + 1] - a[i]) < mina)
        mina = a[i + 1] - a[i];
    }
    cout << mina << endl;
  }
}